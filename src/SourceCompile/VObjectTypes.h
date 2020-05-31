
// This file is automatically generated by generate_parser_listener.tcl
// DO NOT EDIT

#ifndef VOBJECTTYPES_H
#define VOBJECTTYPES_H
enum VObjectType {
      sl0 = 0,
      sl1 = 1,
      slAccelerate_directive = 2,
      slAction_block = 3,
      slActual_arg_expr = 4,
      slActual_arg_list = 5,
      slAlways_construct = 6,
      slAlwaysKeywd_Always = 7,
      slAlwaysKeywd_Comb = 8,
      slAlwaysKeywd_FF = 9,
      slAlwaysKeywd_Latch = 10,
      slAnd_call = 11,
      slAnonymous_program = 12,
      slAnonymous_program_item = 13,
      slAnsi_port_declaration = 14,
      slArray_manipulation_call = 15,
      slArray_member_label = 16,
      slArray_method_name = 17,
      slArray_pattern_key = 18,
      slArray_range_expression = 19,
      slAssert_property_statement = 20,
      slAssertion_item = 21,
      slAssertion_item_declaration = 22,
      slAssertion_variable_declaration = 23,
      slAssign = 24,
      slAssignment_pattern = 25,
      slAssignment_pattern_expression = 26,
      slAssignment_pattern_expression_type = 27,
      slAssignment_pattern_key = 28,
      slAssignment_pattern_net_lvalue = 29,
      slAssignment_pattern_variable_lvalue = 30,
      slAssignOp_Add = 31,
      slAssignOp_ArithShiftLeft = 32,
      slAssignOp_ArithShiftRight = 33,
      slAssignOp_Assign = 34,
      slAssignOp_BitwAnd = 35,
      slAssignOp_BitwLeftShift = 36,
      slAssignOp_BitwOr = 37,
      slAssignOp_BitwRightShift = 38,
      slAssignOp_BitwXor = 39,
      slAssignOp_Div = 40,
      slAssignOp_Modulo = 41,
      slAssignOp_Mult = 42,
      slAssignOp_Sub = 43,
      slAssociative_dimension = 44,
      slAssume_property_statement = 45,
      slAttr_name = 46,
      slAttr_spec = 47,
      slAttribute_instance = 48,
      slAutoexpand_vectornets_directive = 49,
      slBegin_keywords_directive = 50,
      slBind_directive = 51,
      slBind_instantiation = 52,
      slBinModOp_BitwAnd = 53,
      slBinModOp_BitwOr = 54,
      slBinModOp_BitwXor = 55,
      slBinModOp_Equiv = 56,
      slBinModOp_LogicAnd = 57,
      slBinModOp_LogicOr = 58,
      slBinModOp_NotEqual = 59,
      slBinModOp_ReductXnor1 = 60,
      slBinModOp_ReductXnor2 = 61,
      slBinOp_ArithShiftLeft = 62,
      slBinOp_ArithShiftRight = 63,
      slBinOp_BitwAnd = 64,
      slBinOp_BitwOr = 65,
      slBinOp_BitwXor = 66,
      slBinOp_Div = 67,
      slBinOp_Equiv = 68,
      slBinOp_Equivalence = 69,
      slBinOp_FourStateLogicEqual = 70,
      slBinOp_FourStateLogicNotEqual = 71,
      slBinOp_Great = 72,
      slBinOp_GreatEqual = 73,
      slBinOp_Imply = 74,
      slBinOp_Less = 75,
      slBinOp_LessEqual = 76,
      slBinOp_LogicAnd = 77,
      slBinOp_LogicOr = 78,
      slBinOp_Minus = 79,
      slBinOp_Mult = 80,
      slBinOp_MultMult = 81,
      slBinOp_Not = 82,
      slBinOp_Percent = 83,
      slBinOp_Plus = 84,
      slBinOp_ReductNand = 85,
      slBinOp_ReductNor = 86,
      slBinOp_ReductXnor1 = 87,
      slBinOp_ReductXnor2 = 88,
      slBinOp_ShiftLeft = 89,
      slBinOp_ShiftRight = 90,
      slBinOp_WildcardEqual = 91,
      slBinOp_WildcardNotEqual = 92,
      slBinOp_WildEqual = 93,
      slBinOp_WildNotEqual = 94,
      slBins_Bins = 95,
      slBins_expression = 96,
      slBins_Ignore = 97,
      slBins_Illegal = 98,
      slBins_or_empty = 99,
      slBins_or_options = 100,
      slBins_selection = 101,
      slBins_selection_or_option = 102,
      slBit_select = 103,
      slBlock_event_expression = 104,
      slBlock_item_declaration = 105,
      slBlocking_assignment = 106,
      slBoolean_abbrev = 107,
      slBreakStmt = 108,
      slBuilt_in_method_call = 109,
      slCase = 110,
      slCase_generate_construct = 111,
      slCase_generate_item = 112,
      slCase_inside_item = 113,
      slCase_item = 114,
      slCase_keyword = 115,
      slCase_pattern_item = 116,
      slCase_statement = 117,
      slCaseX = 118,
      slCaseZ = 119,
      slCast = 120,
      slCasting_type = 121,
      slCell_clause = 122,
      slCelldefine_directive = 123,
      slChandle_type = 124,
      slChargeStrength_Large = 125,
      slChargeStrength_Medium = 126,
      slChargeStrength_Small = 127,
      slChecker = 128,
      slChecker_declaration = 129,
      slChecker_generate_item = 130,
      slChecker_instantiation = 131,
      slChecker_or_generate_item = 132,
      slChecker_or_generate_item_declaration = 133,
      slChecker_port_item = 134,
      slChecker_port_list = 135,
      slClass = 136,
      slClass_constraint = 137,
      slClass_constructor_declaration = 138,
      slClass_constructor_prototype = 139,
      slClass_declaration = 140,
      slClass_item = 141,
      slClass_keyword = 142,
      slClass_method = 143,
      slClass_new = 144,
      slClass_property = 145,
      slClass_scope = 146,
      slClass_type = 147,
      slClassItemQualifier_Local = 148,
      slClassItemQualifier_Protected = 149,
      slClassItemQualifier_Static = 150,
      slClocking_decl_assign = 151,
      slClocking_declaration = 152,
      slClocking_drive = 153,
      slClocking_event = 154,
      slClocking_item = 155,
      slClocking_skew = 156,
      slClockingDir_Inout = 157,
      slClockingDir_Input = 158,
      slClockingDir_InputOutput = 159,
      slClockingDir_Output = 160,
      slClockvar = 161,
      slClockvar_expression = 162,
      slCmos_switch_instance = 163,
      slCmosSwitchType_Cmos = 164,
      slCmosSwitchType_RCmos = 165,
      slColumnPartSelectOp = 166,
      slCombinational_body = 167,
      slCombinational_entry = 168,
      slComma_operator = 169,
      slComments = 170,
      slComplex_func_call = 171,
      slConcatenation = 172,
      slConcurrent_assertion_item = 173,
      slConcurrent_assertion_item_declaration = 174,
      slConcurrent_assertion_statement = 175,
      slCond_predicate = 176,
      slConditional_generate_construct = 177,
      slConditional_operator = 178,
      slConditional_statement = 179,
      slConfig = 180,
      slConfig_declaration = 181,
      slConfig_rule_statement = 182,
      slConsecutive_repetition = 183,
      slConst_or_range_expression = 184,
      slConst_type = 185,
      slConstant_assignment_pattern_expression = 186,
      slConstant_bit_select = 187,
      slConstant_cast = 188,
      slConstant_concatenation = 189,
      slConstant_expression = 190,
      slConstant_indexed_range = 191,
      slConstant_mintypmax_expression = 192,
      slConstant_multiple_concatenation = 193,
      slConstant_param_expression = 194,
      slConstant_part_select_range = 195,
      slConstant_primary = 196,
      slConstant_range = 197,
      slConstant_range_expression = 198,
      slConstant_select = 199,
      slConstantSelect = 200,
      slConstraint_block = 201,
      slConstraint_block_item = 202,
      slConstraint_declaration = 203,
      slConstraint_expression = 204,
      slConstraint_primary = 205,
      slConstraint_prototype = 206,
      slConstraint_set = 207,
      slConstSelect = 208,
      slContext_keyword = 209,
      slContinueStmt = 210,
      slContinuous_assign = 211,
      slControlled_timing_check_event = 212,
      slCover_cross = 213,
      slCover_point = 214,
      slCover_property_statement = 215,
      slCover_sequence_statement = 216,
      slCoverage_event = 217,
      slCoverage_option = 218,
      slCoverage_spec = 219,
      slCoverage_spec_or_option = 220,
      slCovergroup_declaration = 221,
      slCR = 222,
      slCross_body = 223,
      slCross_body_item = 224,
      slCross_item = 225,
      slCycle_delay = 226,
      slCycle_delay_const_range_expression = 227,
      slCycle_delay_range = 228,
      slData_declaration = 229,
      slData_type = 230,
      slData_type_or_implicit = 231,
      slData_type_or_void = 232,
      slDeassign = 233,
      slDecPartSelectOp = 234,
      slDefault_clause = 235,
      slDefault_decay_time_directive = 236,
      slDefault_nettype_directive = 237,
      slDefault_trireg_strenght_directive = 238,
      slDefault_value = 239,
      slDefaultSkew_Intput = 240,
      slDefaultSkew_IntputOutput = 241,
      slDefaultSkew_Output = 242,
      slDeferred_immediate_assert_statement = 243,
      slDeferred_immediate_assertion_item = 244,
      slDeferred_immediate_assertion_statement = 245,
      slDeferred_immediate_assume_statement = 246,
      slDeferred_immediate_cover_statement = 247,
      slDefine_directive = 248,
      slDefparam_assignment = 249,
      slDelay2 = 250,
      slDelay3 = 251,
      slDelay_control = 252,
      slDelay_mode_distributed_directive = 253,
      slDelay_mode_path_directive = 254,
      slDelay_mode_unit_directive = 255,
      slDelay_mode_zero_directive = 256,
      slDelay_or_event_control = 257,
      slDelay_value = 258,
      slDelayed_data = 259,
      slDelayed_reference = 260,
      slDescription = 261,
      slDesign_statement = 262,
      slDirective_in_macro = 263,
      slDisable_portfaults_directive = 264,
      slDisable_statement = 265,
      slDist_item = 266,
      slDist_list = 267,
      slDistWeight_AssignRange = 268,
      slDistWeight_AssignValue = 269,
      slDo = 270,
      slDollar_fullskew_timing_check = 271,
      slDollar_hold_timing_check = 272,
      slDollar_keyword = 273,
      slDollar_nochange_timing_check = 274,
      slDollar_period_timing_check = 275,
      slDollar_recovery_timing_check = 276,
      slDollar_recrem_timing_check = 277,
      slDollar_removal_timing_check = 278,
      slDollar_root_keyword = 279,
      slDollar_setup_timing_check = 280,
      slDollar_setuphold_timing_check = 281,
      slDollar_skew_timing_check = 282,
      slDollar_timeskew_timing_check = 283,
      slDollar_width_timing_check = 284,
      slDpi_import_export = 285,
      slDrive_strength = 286,
      slDynamic_array_new = 287,
      slEdge_control_specifier = 288,
      slEdge_descriptor = 289,
      slEdge_Edge = 290,
      slEdge_indicator = 291,
      slEdge_input_list = 292,
      slEdge_Negedge = 293,
      slEdge_Posedge = 294,
      slEdge_sensitive_path_declaration = 295,
      slEdge_symbol = 296,
      slElaboration_system_task = 297,
      slElse_directive = 298,
      slElseif_directive = 299,
      slElseif_directive_in_macro_body = 300,
      slElsif_directive = 301,
      slElsif_directive_in_macro_body = 302,
      slEmpty_queue = 303,
      slEnable_gate_instance = 304,
      slEnable_portfaults_directive = 305,
      slEnableGateType_Bufif0 = 306,
      slEnableGateType_Bufif1 = 307,
      slEnableGateType_Notif0 = 308,
      slEnableGateType_Notif1 = 309,
      slEnd = 310,
      slEnd_edge_offset = 311,
      slEnd_keywords_directive = 312,
      slEndcase = 313,
      slEndcelldefine_directive = 314,
      slEndchecker = 315,
      slEndclass = 316,
      slEndclocking = 317,
      slEndconfig = 318,
      slEndfunction = 319,
      slEndgenerate = 320,
      slEndgroup = 321,
      slEndif_directive = 322,
      slEndinterface = 323,
      slEndmodule = 324,
      slEndpackage = 325,
      slEndprimitive = 326,
      slEndprogram = 327,
      slEndproperty = 328,
      slEndprotect_directive = 329,
      slEndprotected_directive = 330,
      slEndsequence = 331,
      slEndspecify = 332,
      slEndtable = 333,
      slEndtask = 334,
      slEnum_base_type = 335,
      slEnum_keyword = 336,
      slEnum_name_declaration = 337,
      slEscaped_identifier = 338,
      slEscaped_macro_definition_body = 339,
      slEscaped_macro_definition_body_alt1 = 340,
      slEscaped_macro_definition_body_alt2 = 341,
      slEscapedCR = 342,
      slEvent_based_flag = 343,
      slEvent_control = 344,
      slEvent_expression = 345,
      slEvent_trigger = 346,
      slEvent_type = 347,
      slEveryRule = 348,
      slExpand_vectornets_directive = 349,
      slExpect_property_statement = 350,
      slExpression = 351,
      slExpression_or_cond_pattern = 352,
      slExpression_or_dist = 353,
      slExtern_constraint_declaration = 354,
      slExtern_qualifier = 355,
      slExtern_tf_declaration = 356,
      slFile_path_spec = 357,
      slFinal_construct = 358,
      slFor = 359,
      slFor_initialization = 360,
      slFor_step = 361,
      slFor_step_assignment = 362,
      slFor_variable_declaration = 363,
      slForce = 364,
      slForeach = 365,
      slForever = 366,
      slFull_edge_sensitive_path_description = 367,
      slFull_path_description = 368,
      slFunction_body_declaration = 369,
      slFunction_data_type = 370,
      slFunction_data_type_or_implicit = 371,
      slFunction_declaration = 372,
      slFunction_name_decl = 373,
      slFunction_prototype = 374,
      slFunction_statement_or_null = 375,
      slGate_instantiation = 376,
      slGenerate_block = 377,
      slGenerate_interface_block = 378,
      slGenerate_interface_case_statement = 379,
      slGenerate_interface_conditional_statement = 380,
      slGenerate_interface_item = 381,
      slGenerate_interface_loop_statement = 382,
      slGenerate_interface_named_block = 383,
      slGenerate_item = 384,
      slGenerate_module_block = 385,
      slGenerate_module_case_statement = 386,
      slGenerate_module_conditional_statement = 387,
      slGenerate_module_item = 388,
      slGenerate_module_loop_statement = 389,
      slGenerate_module_named_block = 390,
      slGenerate_region = 391,
      slGenerated_interface_instantiation = 392,
      slGenerated_module_instantiation = 393,
      slGenericElementType = 394,
      slGenvar_assignment = 395,
      slGenvar_decl_assignment = 396,
      slGenvar_declaration = 397,
      slGenvar_initialization = 398,
      slGenvar_interface_case_item = 399,
      slGenvar_iteration = 400,
      slGenvar_module_case_item = 401,
      slGoto_repetition = 402,
      slHierarchical_btf_identifier = 403,
      slHierarchical_identifier = 404,
      slHierarchical_instance = 405,
      slIdentifier = 406,
      slIdentifier_in_macro_body = 407,
      slIdentifier_list = 408,
      slIf_generate_construct = 409,
      slIfdef_directive = 410,
      slIfdef_directive_in_macro_body = 411,
      slIfndef_directive = 412,
      slIfndef_directive_in_macro_body = 413,
      slImmediate_assertion_statement = 414,
      slImplicit_class_handle = 415,
      slImplicit_data_type = 416,
      slInc_or_dec_expression = 417,
      slIncDec_MinusMinus = 418,
      slIncDec_PlusPlus = 419,
      slInclude_directive = 420,
      slInclude_statement = 421,
      slIncPartSelectOp = 422,
      slIndexed_range = 423,
      slInitial_construct = 424,
      slInitVal_1TickB0 = 425,
      slInitVal_1Tickb0 = 426,
      slInitVal_1TickB1 = 427,
      slInitVal_1Tickb1 = 428,
      slInitVal_1TickBX = 429,
      slInitVal_1TickBx = 430,
      slInitVal_1TickbX = 431,
      slInitVal_1Tickbx = 432,
      slInitVal_Integral = 433,
      slInout_declaration = 434,
      slInput_declaration = 435,
      slInst_clause = 436,
      slInst_name = 437,
      slIntConst = 438,
      slInteger_type = 439,
      slIntegerAtomType_Byte = 440,
      slIntegerAtomType_Int = 441,
      slIntegerAtomType_LongInt = 442,
      slIntegerAtomType_Shortint = 443,
      slIntegerAtomType_Time = 444,
      slInterface = 445,
      slInterface_ansi_header = 446,
      slInterface_class_declaration = 447,
      slInterface_class_item = 448,
      slInterface_class_keyword = 449,
      slInterface_class_method = 450,
      slInterface_class_type = 451,
      slInterface_declaration = 452,
      slInterface_identifier = 453,
      slInterface_instantiation = 454,
      slInterface_item = 455,
      slInterface_nonansi_header = 456,
      slInterface_or_generate_item = 457,
      slInterface_port_declaration = 458,
      slInterface_port_header = 459,
      slIntVec_TypeBit = 460,
      slIntVec_TypeLogic = 461,
      slIntVec_TypeReg = 462,
      slJoin_any_keyword = 463,
      slJoin_keyword = 464,
      slJoin_none_keyword = 465,
      slJump_statement = 466,
      slLet_declaration = 467,
      slLet_formal_type = 468,
      slLet_port_item = 469,
      slLet_port_list = 470,
      slLevel_input_list = 471,
      slLevel_symbol = 472,
      slLiblist_clause = 473,
      slLibrary_declaration = 474,
      slLibrary_descriptions = 475,
      slLibrary_text = 476,
      slLifetime_Automatic = 477,
      slLifetime_Static = 478,
      slLine_directive = 479,
      slList_of_arguments = 480,
      slList_of_checker_port_connections = 481,
      slList_of_clocking_decl_assign = 482,
      slList_of_cross_items = 483,
      slList_of_defparam_assignments = 484,
      slList_of_interface_identifiers = 485,
      slList_of_net_assignments = 486,
      slList_of_net_decl_assignments = 487,
      slList_of_param_assignments = 488,
      slList_of_parameter_assignments = 489,
      slList_of_path_delay_expressions = 490,
      slList_of_path_inputs = 491,
      slList_of_path_outputs = 492,
      slList_of_port_connections = 493,
      slList_of_port_declarations = 494,
      slList_of_port_identifiers = 495,
      slList_of_ports = 496,
      slList_of_specparam_assignments = 497,
      slList_of_tf_variable_identifiers = 498,
      slList_of_type_assignments = 499,
      slList_of_variable_assignments = 500,
      slList_of_variable_decl_assignments = 501,
      slList_of_variable_identifiers = 502,
      slList_of_variable_port_identifiers = 503,
      slList_of_virtual_interface_decl = 504,
      slLocal_parameter_declaration = 505,
      slLoop_generate_construct = 506,
      slLoop_statement = 507,
      slLoop_variables = 508,
      slMacro_actual_args = 509,
      slMacro_arg = 510,
      slMacro_arguments = 511,
      slMacro_definition = 512,
      slMacroInstanceNoArgs = 513,
      slMacroInstanceWithArgs = 514,
      slMatches = 515,
      slMethod_call = 516,
      slMethod_call_body = 517,
      slMethod_call_root = 518,
      slMethod_prototype = 519,
      slMethodQualifier_ClassItem = 520,
      slMethodQualifier_Virtual = 521,
      slMintypmax_expression = 522,
      slModport_hierarchical_ports_declaration = 523,
      slModport_item = 524,
      slModport_ports_declaration = 525,
      slModport_simple_port = 526,
      slModport_simple_ports_declaration = 527,
      slModport_tf_port = 528,
      slModport_tf_ports_declaration = 529,
      slModule = 530,
      slModule_ansi_header = 531,
      slModule_common_item = 532,
      slModule_declaration = 533,
      slModule_instantiation = 534,
      slModule_item = 535,
      slModule_keyword = 536,
      slModule_nonansi_header = 537,
      slModule_or_generate_item = 538,
      slModule_or_generate_item_declaration = 539,
      slModule_path_concatenation = 540,
      slModule_path_expression = 541,
      slModule_path_mintypmax_expression = 542,
      slModule_path_multiple_concatenation = 543,
      slModule_path_primary = 544,
      slModuleInstance = 545,
      slMos_switch_instance = 546,
      slMosSwitchType_NMos = 547,
      slMosSwitchType_PMos = 548,
      slMosSwitchType_RNMos = 549,
      slMosSwitchType_RPMos = 550,
      slMultiline_args_macro_definition = 551,
      slMultiline_no_args_macro_definition = 552,
      slMultiple_concatenation = 553,
      slN_input_gate_instance = 554,
      slN_output_gate_instance = 555,
      slName_of_instance = 556,
      slNamed_checker_port_connection = 557,
      slNamed_parameter_assignment = 558,
      slNamed_port_connection = 559,
      slNet_alias = 560,
      slNet_assignment = 561,
      slNet_decl_assignment = 562,
      slNet_declaration = 563,
      slNet_lvalue = 564,
      slNet_port_header = 565,
      slNet_port_type = 566,
      slNet_type_declaration = 567,
      slNetType_Supply0 = 568,
      slNetType_Supply1 = 569,
      slNetType_Tri = 570,
      slNetType_Tri0 = 571,
      slNetType_Tri1 = 572,
      slNetType_TriAnd = 573,
      slNetType_TriOr = 574,
      slNetType_TriReg = 575,
      slNetType_Uwire = 576,
      slNetType_Wand = 577,
      slNetType_Wire = 578,
      slNetType_Wor = 579,
      slNext_state = 580,
      slNInpGate_And = 581,
      slNInpGate_Nand = 582,
      slNInpGate_Nor = 583,
      slNInpGate_Or = 584,
      slNInpGate_Xnor = 585,
      slNInpGate_Xor = 586,
      slNoaccelerate_directive = 587,
      slNoexpand_vectornets_directive = 588,
      slNon_consecutive_repetition = 589,
      slNon_port_interface_item = 590,
      slNon_port_module_item = 591,
      slNon_port_program_item = 592,
      slNonblocking_assignment = 593,
      slNonIntType_Real = 594,
      slNonIntType_RealTime = 595,
      slNonIntType_ShortReal = 596,
      slNonrange_select = 597,
      slNonrange_variable_lvalue = 598,
      slNoremove_gatenames_directive = 599,
      slNoremove_netnames_directive = 600,
      slNosuppress_faults_directive = 601,
      slNotifier = 602,
      slNoType = 603,
      slNounconnected_drive_directive = 604,
      slNOutGate_Buf = 605,
      slNOutGate_Not = 606,
      slNull_keyword = 607,
      slNull_rule = 608,
      slNumber = 609,
      slNumber_1TickB0 = 610,
      slNumber_1Tickb0 = 611,
      slNumber_1TickB1 = 612,
      slNumber_1Tickb1 = 613,
      slNumber_1TickBX = 614,
      slNumber_1TickBx = 615,
      slNumber_1TickbX = 616,
      slNumber_1Tickbx = 617,
      slNumber_Integral = 618,
      slNumber_Real = 619,
      slNumber_Tick0 = 620,
      slNumber_Tick1 = 621,
      slNumber_TickB0 = 622,
      slNumber_Tickb0 = 623,
      slNumber_TickB1 = 624,
      slNumber_Tickb1 = 625,
      slOpen_range_list = 626,
      slOperator_assignment = 627,
      slOr_call = 628,
      slOr_operator = 629,
      slOrdered_checker_port_connection = 630,
      slOrdered_parameter_assignment = 631,
      slOrdered_port_connection = 632,
      slOutput_declaration = 633,
      slOutput_symbol = 634,
      slOverload_declaration = 635,
      slOverload_proto_formals = 636,
      slOverloadOp_Div = 637,
      slOverloadOp_Equal = 638,
      slOverloadOp_Equiv = 639,
      slOverloadOp_Greater = 640,
      slOverloadOp_GreaterEqual = 641,
      slOverloadOp_Less = 642,
      slOverloadOp_LessEqual = 643,
      slOverloadOp_Minus = 644,
      slOverloadOp_MinusMinus = 645,
      slOverloadOp_Mult = 646,
      slOverloadOp_NotEqual = 647,
      slOverloadOp_Percent = 648,
      slOverloadOp_Plus = 649,
      slOverloadOp_PlusPlus = 650,
      slOverloadOp_StarStar = 651,
      slPackage = 652,
      slPackage_declaration = 653,
      slPackage_export_declaration = 654,
      slPackage_import_declaration = 655,
      slPackage_import_item = 656,
      slPackage_item = 657,
      slPackage_or_generate_item_declaration = 658,
      slPackage_scope = 659,
      slPacked_dimension = 660,
      slPacked_keyword = 661,
      slPaired_parens = 662,
      slPar_block = 663,
      slParallel_edge_sensitive_path_description = 664,
      slParallel_path_description = 665,
      slParam_assignment = 666,
      slParam_expression = 667,
      slParameter_declaration = 668,
      slParameter_override = 669,
      slParameter_port_declaration = 670,
      slParameter_port_list = 671,
      slParameter_value_assignment = 672,
      slPart_select_op = 673,
      slPart_select_op_column = 674,
      slPart_select_range = 675,
      slPass_enable_switch_instance = 676,
      slPass_switch_instance = 677,
      slPassEnSwitch_RTranif0 = 678,
      slPassEnSwitch_RTranif1 = 679,
      slPassEnSwitch_Tranif0 = 680,
      slPassEnSwitch_Tranif1 = 681,
      slPassSwitch_RTran = 682,
      slPassSwitch_Tran = 683,
      slPath_declaration = 684,
      slPath_delay_expression = 685,
      slPath_delay_value = 686,
      slPattern = 687,
      slPort = 688,
      slPort_declaration = 689,
      slPort_expression = 690,
      slPort_reference = 691,
      slPortDir_Inout = 692,
      slPortDir_Inp = 693,
      slPortDir_Out = 694,
      slPortDir_Ref = 695,
      slPortInst = 696,
      slPound_delay = 697,
      slPound_delay_value = 698,
      slPragma_directive = 699,
      slPragma_expression = 700,
      slPragma_value = 701,
      slPrimary = 702,
      slPrimary_literal = 703,
      slPrimitive = 704,
      slPrimitiveInstance = 705,
      slPriority = 706,
      slProcedural_assertion_statement = 707,
      slProcedural_continuous_assignment = 708,
      slProcedural_timing_control = 709,
      slProcedural_timing_control_statement = 710,
      slProduction = 711,
      slProduction_item = 712,
      slProgram = 713,
      slProgram_ansi_header = 714,
      slProgram_declaration = 715,
      slProgram_generate_item = 716,
      slProgram_instantiation = 717,
      slProgram_item = 718,
      slProgram_nonansi_header = 719,
      slProperty_actual_arg = 720,
      slProperty_case_item = 721,
      slProperty_declaration = 722,
      slProperty_expr = 723,
      slProperty_formal_type = 724,
      slProperty_instance = 725,
      slProperty_lvar_port_direction = 726,
      slProperty_port_item = 727,
      slProperty_port_list = 728,
      slProperty_spec = 729,
      slPropQualifier_ClassItem = 730,
      slPropQualifier_Rand = 731,
      slPropQualifier_Randc = 732,
      slProtect_directive = 733,
      slProtected_directive = 734,
      slPs_identifier = 735,
      slPs_or_hierarchical_array_identifier = 736,
      slPs_or_hierarchical_identifier = 737,
      slPs_or_hierarchical_sequence_identifier = 738,
      slPs_type_identifier = 739,
      slPull_gate_instance = 740,
      slPulldownStrength_0 = 741,
      slPulldownStrength_01 = 742,
      slPulldownStrength_10 = 743,
      slPullupStrength_1 = 744,
      slPullupStrength_01 = 745,
      slPullupStrength_10 = 746,
      slPulse_control_specparam = 747,
      slPulsestyle_declaration = 748,
      slPure_keyword = 749,
      slPure_virtual_qualifier = 750,
      slQueue_dimension = 751,
      slRandcase_item = 752,
      slRandcase_statement = 753,
      slRandomize_call = 754,
      slRandomQualifier_Rand = 755,
      slRandomQualifier_RandC = 756,
      slRandsequence_statement = 757,
      slRange_expression = 758,
      slRange_list = 759,
      slRealConst = 760,
      slRef_declaration = 761,
      slReference_event = 762,
      slRelease = 763,
      slRemain_active_flag = 764,
      slRemove_gatename_directive = 765,
      slRemove_netname_directive = 766,
      slRepeat = 767,
      slRepeat_range = 768,
      slResetall_directive = 769,
      slRestrict_property_statement = 770,
      slReturnStmt = 771,
      slRs_case = 772,
      slRs_case_item = 773,
      slRs_code_block = 774,
      slRs_if_else = 775,
      slRs_prod = 776,
      slRs_production_list = 777,
      slRs_repeat = 778,
      slRs_rule = 779,
      slScalar_1TickB0 = 780,
      slScalar_1Tickb0 = 781,
      slScalar_1TickB1 = 782,
      slScalar_1Tickb1 = 783,
      slScalar_Integral = 784,
      slScalar_TickB0 = 785,
      slScalar_Tickb0 = 786,
      slScalar_TickB1 = 787,
      slScalar_Tickb1 = 788,
      slScalar_timing_check_condition = 789,
      slSelect = 790,
      slSelect_condition = 791,
      slSelect_expression = 792,
      slSeq_block = 793,
      slSeq_input_list = 794,
      slSeqFormatType_Data = 795,
      slSeqFormatType_Sequence = 796,
      slSeqFormatType_Untyped = 797,
      slSeqLvarPortDir_Inout = 798,
      slSeqLvarPortDir_Input = 799,
      slSeqLvarPortDir_Output = 800,
      slSequence_actual_arg = 801,
      slSequence_declaration = 802,
      slSequence_expr = 803,
      slSequence_instance = 804,
      slSequence_list_of_arguments = 805,
      slSequence_match_item = 806,
      slSequence_method_call = 807,
      slSequence_port_item = 808,
      slSequence_port_list = 809,
      slSequential_body = 810,
      slSequential_entry = 811,
      slShowcancelled_declaration = 812,
      slSigned_directive = 813,
      slSigning_Signed = 814,
      slSigning_Unsigned = 815,
      slSimple_args_macro_definition = 816,
      slSimple_args_macro_definition_in_macro_body = 817,
      slSimple_immediate_assert_statement = 818,
      slSimple_immediate_assertion_statement = 819,
      slSimple_immediate_assume_statement = 820,
      slSimple_immediate_cover_statement = 821,
      slSimple_macro_definition_body = 822,
      slSimple_macro_definition_body_in_macro_body = 823,
      slSimple_no_args_macro_definition = 824,
      slSimple_no_args_macro_definition_in_macro_body = 825,
      slSimple_path_declaration = 826,
      slSimple_type = 827,
      slSlice_size = 828,
      slSlline = 829,
      slSolve_before_list = 830,
      slSource_text = 831,
      slSpaces = 832,
      slSpecify_block = 833,
      slSpecify_input_terminal_descriptor = 834,
      slSpecify_item = 835,
      slSpecify_output_terminal_descriptor = 836,
      slSpecify_terminal_descriptor = 837,
      slSpecparam_assignment = 838,
      slSpecparam_declaration = 839,
      slStamptime_condition = 840,
      slStart_edge_offset = 841,
      slState_dependent_path_declaration = 842,
      slStatement = 843,
      slStatement_item = 844,
      slStatement_or_null = 845,
      slStream_concatenation = 846,
      slStream_expression = 847,
      slStream_operator = 848,
      slStreaming_concatenation = 849,
      slStrength0_Pull0 = 850,
      slStrength0_Strong0 = 851,
      slStrength0_Supply0 = 852,
      slStrength0_Weak0 = 853,
      slStrength1_Pull1 = 854,
      slStrength1_Strong1 = 855,
      slStrength1_Supply1 = 856,
      slStrength1_Weak1 = 857,
      slString = 858,
      slString_blob = 859,
      slString_type = 860,
      slString_value = 861,
      slStringConst = 862,
      slStringLiteral = 863,
      slStruct_keyword = 864,
      slStruct_union = 865,
      slStruct_union_member = 866,
      slStructure_pattern_key = 867,
      slSubroutine_call = 868,
      slSubroutine_call_statement = 869,
      slSuper_dot_new = 870,
      slSuper_keyword = 871,
      slSuppress_faults_directive = 872,
      slSurelog_macro_not_defined = 873,
      slSv_file_directive = 874,
      slSv_interface = 875,
      slSv_line_directive = 876,
      slSv_package = 877,
      slSystem_task = 878,
      slSystem_task_names = 879,
      slSystem_timing_check = 880,
      slT0x_path_delay_expression = 881,
      slT0z_path_delay_expression = 882,
      slT01_path_delay_expression = 883,
      slT1x_path_delay_expression = 884,
      slT1z_path_delay_expression = 885,
      slT10_path_delay_expression = 886,
      slT_path_delay_expression = 887,
      slTagged_keyword = 888,
      slTagged_union_expression = 889,
      slTask_body_declaration = 890,
      slTask_declaration = 891,
      slTask_name_decl = 892,
      slTask_prototype = 893,
      slText_blob = 894,
      slTf_item_declaration = 895,
      slTf_port_declaration = 896,
      slTf_port_item = 897,
      slTf_port_list = 898,
      slTfall_path_delay_expression = 899,
      slTfPortDir_ConstRef = 900,
      slTfPortDir_Inout = 901,
      slTfPortDir_Inp = 902,
      slTfPortDir_Out = 903,
      slTfPortDir_Ref = 904,
      slThis = 905,
      slThis_dot_super = 906,
      slThis_keyword = 907,
      slThreshold = 908,
      slTime_literal = 909,
      slTime_unit = 910,
      slTimescale_directive = 911,
      slTimeUnitsDecl_TimePrecision = 912,
      slTimeUnitsDecl_TimePrecisionTimeUnit = 913,
      slTimeUnitsDecl_TimeUnit = 914,
      slTimeUnitsDecl_TimeUnitDiv = 915,
      slTimeUnitsDecl_TimeUnitTimePrecision = 916,
      slTiming_check_condition = 917,
      slTiming_check_event = 918,
      slTiming_check_limit = 919,
      slTimingCheckEventControl_Edge = 920,
      slTimingCheckEventControl_Negedge = 921,
      slTimingCheckEventControl_Posedge = 922,
      slTop_directives = 923,
      slTop_level_library_rule = 924,
      slTop_level_rule = 925,
      slTrans_list = 926,
      slTrans_range_list = 927,
      slTrans_set = 928,
      slTrise_path_delay_expression = 929,
      slTx0_path_delay_expression = 930,
      slTx1_path_delay_expression = 931,
      slTxz_path_delay_expression = 932,
      slType_declaration = 933,
      slType_reference = 934,
      slTz0_path_delay_expression = 935,
      slTz1_path_delay_expression = 936,
      slTz_path_delay_expression = 937,
      slTzx_path_delay_expression = 938,
      slUdp_ansi_declaration = 939,
      slUdp_body = 940,
      slUdp_declaration = 941,
      slUdp_declaration_port_list = 942,
      slUdp_initial_statement = 943,
      slUdp_input_declaration = 944,
      slUdp_instance = 945,
      slUdp_instantiation = 946,
      slUdp_nonansi_declaration = 947,
      slUdp_output_declaration = 948,
      slUdp_port_declaration = 949,
      slUdp_port_list = 950,
      slUdp_reg_declaration = 951,
      slUnary_BitwAnd = 952,
      slUnary_BitwOr = 953,
      slUnary_BitwXor = 954,
      slUnary_Minus = 955,
      slUnary_Not = 956,
      slUnary_Plus = 957,
      slUnary_ReductNand = 958,
      slUnary_ReductNor = 959,
      slUnary_ReductXnor1 = 960,
      slUnary_ReductXnor2 = 961,
      slUnary_Tilda = 962,
      slUnaryModOp_BitwAnd = 963,
      slUnaryModOp_BitwOr = 964,
      slUnaryModOp_BitwXor = 965,
      slUnaryModOp_Not = 966,
      slUnaryModOp_ReductNand = 967,
      slUnaryModOp_ReductNor = 968,
      slUnaryModOp_ReductXNor1 = 969,
      slUnaryModOp_ReductXnor2 = 970,
      slUnaryModOp_Tilda = 971,
      slUnbased_unsized_literal = 972,
      slUnconnected_drive_directive = 973,
      slUndef_directive = 974,
      slUndefineall_directive = 975,
      slUnion_keyword = 976,
      slUnique = 977,
      slUnique0 = 978,
      slUnique_call = 979,
      slUnique_priority = 980,
      slUniqueness_constraint = 981,
      slUnpacked_dimension = 982,
      slUnsigned_directive = 983,
      slUnsized_dimension = 984,
      slUnterminated_string = 985,
      slUse_clause = 986,
      slUse_clause_config = 987,
      slUselib_directive = 988,
      slValue_range = 989,
      slVar_data_type = 990,
      slVariable_assignment = 991,
      slVariable_decl_assignment = 992,
      slVariable_declaration = 993,
      slVariable_dimension = 994,
      slVariable_lvalue = 995,
      slVariable_port_header = 996,
      slVariable_port_type = 997,
      slVirtual_interface_declaration = 998,
      slWait_statement = 999,
      slWhile = 1000,
      slX = 1001,
      slXor_call = 1002,
      slZ = 1003,
};

#endif /* VOBJECTTYPES_H */

