/*
 * Copyright 2018 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

class riscv_rand_instr extends riscv_instr_base;

  riscv_instr_gen_config cfg;

  // Some additional reserved registers
  riscv_reg_t reserved_rd[];

  `uvm_object_utils(riscv_rand_instr)

  constraint category_c {
    soft category inside {LOAD, STORE, SHIFT, ARITHMETIC, LOGICAL,
                          BRANCH, COMPARE, CSR, SYSTEM, SYNCH};
  }

  // Atomic extension instructions are default disabled
  // AMO instruction generation is handled by riscv_amo_instr_lib.sv
  constraint disable_a_extension_c {
    group != RV32A;
    group != RV64A;
  }

  constraint instr_c {
    solve instr_name before imm;
    solve instr_name before rs1;
    solve instr_name before rs2;
    !(instr_name inside {riscv_instr_pkg::unsupported_instr});
    group inside {riscv_instr_pkg::supported_isa};
    // Avoid using any special purpose register as rd, those registers are reserved for
    // special instructions
    !(rd inside {cfg.reserved_regs});
    if(reserved_rd.size() > 0) {
      !(rd inside {reserved_rd});
    }
    // Compressed instruction may use the same CSR for both rs1 and rd
    if(group inside {RV32C, RV64C, RV128C, RV32FC, RV32DC}) {
      !(rs1 inside {cfg.reserved_regs, reserved_rd});
    }
    // Below instrutions will modify stack pointer, not allowed in normal instruction stream.
    // It can be used in stack operation instruction stream.
    !(instr_name inside {C_SWSP, C_SDSP, C_ADDI16SP});
    // Avoid using reserved registers as rs1 (base address)
    if(category inside {LOAD, STORE}) {
      !(rs1 inside {reserved_rd, cfg.reserved_regs, ZERO});
    }
    if(!cfg.enable_sfence) {
      instr_name != SFENCE_VMA;
    }
    if(cfg.no_fence) {
      !(instr_name inside {FENCE, FENCE_I, SFENCE_VMA});
    }
    // TODO: Support C_ADDI4SPN
    instr_name != C_ADDI4SPN;
  }

  constraint constraint_cfg_knob_c {
    if(cfg.no_ebreak) {
      instr_name != EBREAK;
      instr_name != C_EBREAK;
    }
    if(cfg.no_wfi) {
      instr_name != WFI;
    }
    if(cfg.no_dret) {
      instr_name != DRET;
    }
    // Below previleged instruction is not generated by default
    !(instr_name inside {ECALL, URET, SRET, MRET});
    if(cfg.no_load_store) {
      category != LOAD;
      category != STORE;
    }
    if(cfg.no_branch_jump) {
      category != BRANCH;
    }
    if (cfg.disable_compressed_instr) {
      !(group inside {RV32C, RV64C, RV128C, RV32FC, RV32DC});
    }
  }

  constraint csr_instr_c {
    // TODO: support CSR instruction in other modes
    if(cfg.no_csr_instr || (cfg.init_privileged_mode != MACHINE_MODE)) {
      category != CSR;
    } else {
      if (cfg.enable_illegal_csr_instruction) {
        !(csr inside {implemented_csr});
      } else {
        // Use scratch register to avoid the side effect of modifying other privileged mode CSR.
        if (cfg.init_privileged_mode == MACHINE_MODE) {
          csr == MSCRATCH;
        } else if (cfg.init_privileged_mode == SUPERVISOR_MODE) {
          csr == SSCRATCH;
        } else {
          csr == USCRATCH;
        }
      }
    }
  }

  constraint floating_point_c {
    if (!cfg.enable_floating_point) {
      !(group inside {RV32F, RV64F, RV32D, RV64D});
    }
  }

  function void pre_randomize();
    if (!cfg.enable_floating_point) begin
      fs1.rand_mode(0);
      fs2.rand_mode(0);
      fs3.rand_mode(0);
      fd.rand_mode(0);
    end
  endfunction

  // No label is needed if there's no branch/jump instruction
  function void post_randomize();
    super.post_randomize();
    if (cfg.no_branch_jump) begin
      has_label = 1'b0;
    end
  endfunction

  `uvm_object_new

endclass
