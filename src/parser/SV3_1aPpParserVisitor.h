
// Generated from /home/alain/Surelog/src/../grammar/SV3_1aPpParser.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SV3_1aPpParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SV3_1aPpParser.
 */
class  SV3_1aPpParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SV3_1aPpParser.
   */
    virtual antlrcpp::Any visitSource_text(SV3_1aPpParser::Source_textContext *context) = 0;

    virtual antlrcpp::Any visitDescription(SV3_1aPpParser::DescriptionContext *context) = 0;

    virtual antlrcpp::Any visitMacroInstanceWithArgs(SV3_1aPpParser::MacroInstanceWithArgsContext *context) = 0;

    virtual antlrcpp::Any visitMacroInstanceNoArgs(SV3_1aPpParser::MacroInstanceNoArgsContext *context) = 0;

    virtual antlrcpp::Any visitUnterminated_string(SV3_1aPpParser::Unterminated_stringContext *context) = 0;

    virtual antlrcpp::Any visitMacro_actual_args(SV3_1aPpParser::Macro_actual_argsContext *context) = 0;

    virtual antlrcpp::Any visitComments(SV3_1aPpParser::CommentsContext *context) = 0;

    virtual antlrcpp::Any visitNumber(SV3_1aPpParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitPound_delay(SV3_1aPpParser::Pound_delayContext *context) = 0;

    virtual antlrcpp::Any visitMacro_definition(SV3_1aPpParser::Macro_definitionContext *context) = 0;

    virtual antlrcpp::Any visitInclude_directive_one_line(SV3_1aPpParser::Include_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitInclude_directive(SV3_1aPpParser::Include_directiveContext *context) = 0;

    virtual antlrcpp::Any visitLine_directive_one_line(SV3_1aPpParser::Line_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitLine_directive(SV3_1aPpParser::Line_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDefault_nettype_directive_one_line(SV3_1aPpParser::Default_nettype_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDefault_nettype_directive(SV3_1aPpParser::Default_nettype_directiveContext *context) = 0;

    virtual antlrcpp::Any visitSv_file_directive(SV3_1aPpParser::Sv_file_directiveContext *context) = 0;

    virtual antlrcpp::Any visitSv_line_directive(SV3_1aPpParser::Sv_line_directiveContext *context) = 0;

    virtual antlrcpp::Any visitTimescale_directive_one_line(SV3_1aPpParser::Timescale_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitTimescale_directive(SV3_1aPpParser::Timescale_directiveContext *context) = 0;

    virtual antlrcpp::Any visitUndef_directive(SV3_1aPpParser::Undef_directiveContext *context) = 0;

    virtual antlrcpp::Any visitIfdef_directive_one_line(SV3_1aPpParser::Ifdef_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitIfdef_directive(SV3_1aPpParser::Ifdef_directiveContext *context) = 0;

    virtual antlrcpp::Any visitIfdef_directive_in_macro_body(SV3_1aPpParser::Ifdef_directive_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitIfndef_directive_one_line(SV3_1aPpParser::Ifndef_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitIfndef_directive(SV3_1aPpParser::Ifndef_directiveContext *context) = 0;

    virtual antlrcpp::Any visitIfndef_directive_in_macro_body(SV3_1aPpParser::Ifndef_directive_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitElsif_directive_one_line(SV3_1aPpParser::Elsif_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitElsif_directive(SV3_1aPpParser::Elsif_directiveContext *context) = 0;

    virtual antlrcpp::Any visitElsif_directive_in_macro_body(SV3_1aPpParser::Elsif_directive_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitElseif_directive_one_line(SV3_1aPpParser::Elseif_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitElseif_directive(SV3_1aPpParser::Elseif_directiveContext *context) = 0;

    virtual antlrcpp::Any visitElseif_directive_in_macro_body(SV3_1aPpParser::Elseif_directive_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitElse_directive_one_line(SV3_1aPpParser::Else_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitElse_directive(SV3_1aPpParser::Else_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEndif_directive_one_line(SV3_1aPpParser::Endif_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEndif_directive(SV3_1aPpParser::Endif_directiveContext *context) = 0;

    virtual antlrcpp::Any visitResetall_directive_one_line(SV3_1aPpParser::Resetall_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitResetall_directive(SV3_1aPpParser::Resetall_directiveContext *context) = 0;

    virtual antlrcpp::Any visitBegin_keywords_directive_one_line(SV3_1aPpParser::Begin_keywords_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitBegin_keywords_directive(SV3_1aPpParser::Begin_keywords_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEnd_keywords_directive_one_line(SV3_1aPpParser::End_keywords_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEnd_keywords_directive(SV3_1aPpParser::End_keywords_directiveContext *context) = 0;

    virtual antlrcpp::Any visitPragma_directive_one_line(SV3_1aPpParser::Pragma_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitPragma_directive(SV3_1aPpParser::Pragma_directiveContext *context) = 0;

    virtual antlrcpp::Any visitCelldefine_directive_one_line(SV3_1aPpParser::Celldefine_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitCelldefine_directive(SV3_1aPpParser::Celldefine_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEndcelldefine_directive_one_line(SV3_1aPpParser::Endcelldefine_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEndcelldefine_directive(SV3_1aPpParser::Endcelldefine_directiveContext *context) = 0;

    virtual antlrcpp::Any visitProtect_directive_one_line(SV3_1aPpParser::Protect_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitProtect_directive(SV3_1aPpParser::Protect_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEndprotect_directive_one_line(SV3_1aPpParser::Endprotect_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEndprotect_directive(SV3_1aPpParser::Endprotect_directiveContext *context) = 0;

    virtual antlrcpp::Any visitProtected_directive_one_line(SV3_1aPpParser::Protected_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitProtected_directive(SV3_1aPpParser::Protected_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEndprotected_directive_one_line(SV3_1aPpParser::Endprotected_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEndprotected_directive(SV3_1aPpParser::Endprotected_directiveContext *context) = 0;

    virtual antlrcpp::Any visitExpand_vectornets_directive_one_line(SV3_1aPpParser::Expand_vectornets_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitExpand_vectornets_directive(SV3_1aPpParser::Expand_vectornets_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNoexpand_vectornets_directive_one_line(SV3_1aPpParser::Noexpand_vectornets_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNoexpand_vectornets_directive(SV3_1aPpParser::Noexpand_vectornets_directiveContext *context) = 0;

    virtual antlrcpp::Any visitAutoexpand_vectornets_directive_one_line(SV3_1aPpParser::Autoexpand_vectornets_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitAutoexpand_vectornets_directive(SV3_1aPpParser::Autoexpand_vectornets_directiveContext *context) = 0;

    virtual antlrcpp::Any visitUselib_directive_one_line(SV3_1aPpParser::Uselib_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitUselib_directive(SV3_1aPpParser::Uselib_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDisable_portfaults_directive_one_line(SV3_1aPpParser::Disable_portfaults_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDisable_portfaults_directive(SV3_1aPpParser::Disable_portfaults_directiveContext *context) = 0;

    virtual antlrcpp::Any visitEnable_portfaults_directive_one_line(SV3_1aPpParser::Enable_portfaults_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitEnable_portfaults_directive(SV3_1aPpParser::Enable_portfaults_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNosuppress_faults_directive_one_line(SV3_1aPpParser::Nosuppress_faults_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNosuppress_faults_directive(SV3_1aPpParser::Nosuppress_faults_directiveContext *context) = 0;

    virtual antlrcpp::Any visitSuppress_faults_directive_one_line(SV3_1aPpParser::Suppress_faults_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitSuppress_faults_directive(SV3_1aPpParser::Suppress_faults_directiveContext *context) = 0;

    virtual antlrcpp::Any visitSigned_directive_one_line(SV3_1aPpParser::Signed_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitSigned_directive(SV3_1aPpParser::Signed_directiveContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_directive_one_line(SV3_1aPpParser::Unsigned_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitUnsigned_directive(SV3_1aPpParser::Unsigned_directiveContext *context) = 0;

    virtual antlrcpp::Any visitRemove_gatename_directive_one_line(SV3_1aPpParser::Remove_gatename_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitRemove_gatename_directive(SV3_1aPpParser::Remove_gatename_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNoremove_gatenames_directive_one_line(SV3_1aPpParser::Noremove_gatenames_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNoremove_gatenames_directive(SV3_1aPpParser::Noremove_gatenames_directiveContext *context) = 0;

    virtual antlrcpp::Any visitRemove_netname_directive_one_line(SV3_1aPpParser::Remove_netname_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitRemove_netname_directive(SV3_1aPpParser::Remove_netname_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNoremove_netnames_directive_one_line(SV3_1aPpParser::Noremove_netnames_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNoremove_netnames_directive(SV3_1aPpParser::Noremove_netnames_directiveContext *context) = 0;

    virtual antlrcpp::Any visitAccelerate_directive_one_line(SV3_1aPpParser::Accelerate_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitAccelerate_directive(SV3_1aPpParser::Accelerate_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNoaccelerate_directive_one_line(SV3_1aPpParser::Noaccelerate_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNoaccelerate_directive(SV3_1aPpParser::Noaccelerate_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDefault_trireg_strenght_directive_one_line(SV3_1aPpParser::Default_trireg_strenght_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDefault_trireg_strenght_directive(SV3_1aPpParser::Default_trireg_strenght_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDefault_decay_time_directive_one_line(SV3_1aPpParser::Default_decay_time_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDefault_decay_time_directive(SV3_1aPpParser::Default_decay_time_directiveContext *context) = 0;

    virtual antlrcpp::Any visitUnconnected_drive_directive_one_line(SV3_1aPpParser::Unconnected_drive_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitUnconnected_drive_directive(SV3_1aPpParser::Unconnected_drive_directiveContext *context) = 0;

    virtual antlrcpp::Any visitNounconnected_drive_directive_one_line(SV3_1aPpParser::Nounconnected_drive_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitNounconnected_drive_directive(SV3_1aPpParser::Nounconnected_drive_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_distributed_directive_one_line(SV3_1aPpParser::Delay_mode_distributed_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_distributed_directive(SV3_1aPpParser::Delay_mode_distributed_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_path_directive_one_line(SV3_1aPpParser::Delay_mode_path_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_path_directive(SV3_1aPpParser::Delay_mode_path_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_unit_directive_one_line(SV3_1aPpParser::Delay_mode_unit_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_unit_directive(SV3_1aPpParser::Delay_mode_unit_directiveContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_zero_directive_one_line(SV3_1aPpParser::Delay_mode_zero_directive_one_lineContext *context) = 0;

    virtual antlrcpp::Any visitDelay_mode_zero_directive(SV3_1aPpParser::Delay_mode_zero_directiveContext *context) = 0;

    virtual antlrcpp::Any visitUndefineall_directive(SV3_1aPpParser::Undefineall_directiveContext *context) = 0;

    virtual antlrcpp::Any visitModule(SV3_1aPpParser::ModuleContext *context) = 0;

    virtual antlrcpp::Any visitEndmodule(SV3_1aPpParser::EndmoduleContext *context) = 0;

    virtual antlrcpp::Any visitSv_interface(SV3_1aPpParser::Sv_interfaceContext *context) = 0;

    virtual antlrcpp::Any visitEndinterface(SV3_1aPpParser::EndinterfaceContext *context) = 0;

    virtual antlrcpp::Any visitProgram(SV3_1aPpParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitEndprogram(SV3_1aPpParser::EndprogramContext *context) = 0;

    virtual antlrcpp::Any visitPrimitive(SV3_1aPpParser::PrimitiveContext *context) = 0;

    virtual antlrcpp::Any visitEndprimitive(SV3_1aPpParser::EndprimitiveContext *context) = 0;

    virtual antlrcpp::Any visitSv_package(SV3_1aPpParser::Sv_packageContext *context) = 0;

    virtual antlrcpp::Any visitEndpackage(SV3_1aPpParser::EndpackageContext *context) = 0;

    virtual antlrcpp::Any visitChecker(SV3_1aPpParser::CheckerContext *context) = 0;

    virtual antlrcpp::Any visitEndchecker(SV3_1aPpParser::EndcheckerContext *context) = 0;

    virtual antlrcpp::Any visitConfig(SV3_1aPpParser::ConfigContext *context) = 0;

    virtual antlrcpp::Any visitEndconfig(SV3_1aPpParser::EndconfigContext *context) = 0;

    virtual antlrcpp::Any visitDefine_directive(SV3_1aPpParser::Define_directiveContext *context) = 0;

    virtual antlrcpp::Any visitMultiline_no_args_macro_definition(SV3_1aPpParser::Multiline_no_args_macro_definitionContext *context) = 0;

    virtual antlrcpp::Any visitMultiline_args_macro_definition(SV3_1aPpParser::Multiline_args_macro_definitionContext *context) = 0;

    virtual antlrcpp::Any visitSimple_no_args_macro_definition(SV3_1aPpParser::Simple_no_args_macro_definitionContext *context) = 0;

    virtual antlrcpp::Any visitSimple_args_macro_definition(SV3_1aPpParser::Simple_args_macro_definitionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier_in_macro_body(SV3_1aPpParser::Identifier_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitSimple_no_args_macro_definition_in_macro_body(SV3_1aPpParser::Simple_no_args_macro_definition_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitSimple_args_macro_definition_in_macro_body(SV3_1aPpParser::Simple_args_macro_definition_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitDirective_in_macro(SV3_1aPpParser::Directive_in_macroContext *context) = 0;

    virtual antlrcpp::Any visitMacro_arguments(SV3_1aPpParser::Macro_argumentsContext *context) = 0;

    virtual antlrcpp::Any visitEscaped_macro_definition_body(SV3_1aPpParser::Escaped_macro_definition_bodyContext *context) = 0;

    virtual antlrcpp::Any visitEscaped_macro_definition_body_alt1(SV3_1aPpParser::Escaped_macro_definition_body_alt1Context *context) = 0;

    virtual antlrcpp::Any visitEscaped_macro_definition_body_alt2(SV3_1aPpParser::Escaped_macro_definition_body_alt2Context *context) = 0;

    virtual antlrcpp::Any visitSimple_macro_definition_body(SV3_1aPpParser::Simple_macro_definition_bodyContext *context) = 0;

    virtual antlrcpp::Any visitSimple_macro_definition_body_in_macro_body(SV3_1aPpParser::Simple_macro_definition_body_in_macro_bodyContext *context) = 0;

    virtual antlrcpp::Any visitPragma_expression(SV3_1aPpParser::Pragma_expressionContext *context) = 0;

    virtual antlrcpp::Any visitMacro_arg(SV3_1aPpParser::Macro_argContext *context) = 0;

    virtual antlrcpp::Any visitPaired_parens(SV3_1aPpParser::Paired_parensContext *context) = 0;

    virtual antlrcpp::Any visitText_blob(SV3_1aPpParser::Text_blobContext *context) = 0;

    virtual antlrcpp::Any visitString(SV3_1aPpParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitEscaped_identifier(SV3_1aPpParser::Escaped_identifierContext *context) = 0;

    virtual antlrcpp::Any visitDefault_value(SV3_1aPpParser::Default_valueContext *context) = 0;

    virtual antlrcpp::Any visitString_blob(SV3_1aPpParser::String_blobContext *context) = 0;


};

