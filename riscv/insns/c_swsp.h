require_extension('C');
MMU.store<uint32_t>(RVC_SP + insn.rvc_swsp_imm(), RVC_RS2);
