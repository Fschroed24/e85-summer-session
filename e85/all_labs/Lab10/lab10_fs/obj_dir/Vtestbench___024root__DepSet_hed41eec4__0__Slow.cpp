// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("controller_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 128> Vtestbench__ConstPool__TABLE_h1ef1ab73_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtestbench__ConstPool__TABLE_he0cb80b8_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h7403d964_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hff4012fd_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h439e773c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hce64235e_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h226c588b_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hdfec76e5_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_h1f62f3cf_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_hc260fb96_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_h789fc230_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtestbench__ConstPool__TABLE_hd31f843f_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = vlSelf->testbench__DOT__op;
    vlSelf->testbench__DOT__ImmSrc = Vtestbench__ConstPool__TABLE_h1ef1ab73_0
        [__Vtableidx3];
    __Vtableidx1 = (((IData)(vlSelf->testbench__DOT__op) 
                     << 4U) | (IData)(vlSelf->testbench__DOT__dut__DOT__state));
    vlSelf->testbench__DOT__dut__DOT__next_state = 
        Vtestbench__ConstPool__TABLE_he0cb80b8_0[__Vtableidx1];
    __Vtableidx2 = vlSelf->testbench__DOT__dut__DOT__state;
    vlSelf->testbench__DOT__AdrSrc = Vtestbench__ConstPool__TABLE_h7403d964_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__IRWrite = Vtestbench__ConstPool__TABLE_hff4012fd_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__PCWrite = Vtestbench__ConstPool__TABLE_h439e773c_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__RegWrite = Vtestbench__ConstPool__TABLE_hce64235e_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__MemWrite = Vtestbench__ConstPool__TABLE_h226c588b_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__dut__DOT__Branch = Vtestbench__ConstPool__TABLE_hdfec76e5_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__ALUSrcA = Vtestbench__ConstPool__TABLE_h1f62f3cf_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__ALUSrcB = Vtestbench__ConstPool__TABLE_hc260fb96_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__dut__DOT__ALUOp = Vtestbench__ConstPool__TABLE_h789fc230_0
        [__Vtableidx2];
    vlSelf->testbench__DOT__ResultSrc = Vtestbench__ConstPool__TABLE_hd31f843f_0
        [__Vtableidx2];
    if ((0U == (IData)(vlSelf->testbench__DOT__dut__DOT__ALUOp))) {
        vlSelf->testbench__DOT__ALUControl = 0U;
    } else if ((1U == (IData)(vlSelf->testbench__DOT__dut__DOT__ALUOp))) {
        vlSelf->testbench__DOT__ALUControl = 1U;
    } else if ((2U == (IData)(vlSelf->testbench__DOT__dut__DOT__ALUOp))) {
        vlSelf->testbench__DOT__ALUControl = ((4U & (IData)(vlSelf->testbench__DOT__Funct3))
                                               ? ((2U 
                                                   & (IData)(vlSelf->testbench__DOT__Funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->testbench__DOT__Funct3))
                                                    ? 2U
                                                    : 3U)
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->testbench__DOT__Funct3))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->testbench__DOT__Funct3))
                                                    ? 0U
                                                    : 5U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->testbench__DOT__Funct3))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->testbench__DOT__op) 
                                                      >> 5U) 
                                                     & (IData)(vlSelf->testbench__DOT__Funct7b5))
                                                     ? 1U
                                                     : 0U))));
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge testbench.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge testbench.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__op = VL_RAND_RESET_I(7);
    vlSelf->testbench__DOT__Funct3 = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__Funct7b5 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__ALUSrcA = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__AdrSrc = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__ALUControl = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__vectornum = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__errors = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 10001; ++__Vi0) {
        vlSelf->testbench__DOT__testvectors[__Vi0] = VL_RAND_RESET_Q(40);
    }
    vlSelf->testbench__DOT__actual = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__expected = VL_RAND_RESET_I(16);
    vlSelf->testbench__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__PCUpdate = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__ALUOp = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__dut__DOT__PCUpdate = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__dut__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__dut__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
