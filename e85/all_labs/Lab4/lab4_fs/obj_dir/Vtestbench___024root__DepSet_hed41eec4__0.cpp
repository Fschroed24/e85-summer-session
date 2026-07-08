// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x652e7476U;
    __Vtemp_1[1U] = 0x6e747572U;
    __Vtemp_1[2U] = 0x61647665U;
    VL_READMEM_N(false, 6, 10001, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->testbench__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__vectornum = 0U;
    vlSelf->testbench__DOT__errors = 0U;
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x16ULL, nullptr, 
                                       "adventure_tb.sv", 
                                       17);
    vlSelf->testbench__DOT__reset = 0U;
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSelf->testbench__DOT__clk = 1U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "adventure_tb.sv", 
                                           12);
        vlSelf->testbench__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "adventure_tb.sv", 
                                           12);
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_hf8270553__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge testbench.clk)", 
                                                           "adventure_tb.sv", 
                                                           20);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "adventure_tb.sv", 
                                           21);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->testbench__DOT__N = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 5U));
        vlSelf->testbench__DOT__S = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 4U));
        vlSelf->testbench__DOT__E = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 3U));
        vlSelf->testbench__DOT__W = (1U & (((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? vlSelf->testbench__DOT__testvectors
                                            [(0x3fffU 
                                              & vlSelf->testbench__DOT__vectornum)]
                                             : 0U) 
                                           >> 2U));
        vlSelf->testbench__DOT__expected = ((0x2710U 
                                             >= (0x3fffU 
                                                 & vlSelf->testbench__DOT__vectornum))
                                             ? (3U 
                                                & vlSelf->testbench__DOT__testvectors
                                                [(0x3fffU 
                                                  & vlSelf->testbench__DOT__vectornum)])
                                             : 0U);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_h0c794650_0;

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->testbench__DOT__S) 
                     << 7U) | (((IData)(vlSelf->testbench__DOT__N) 
                                << 6U) | (((IData)(vlSelf->testbench__DOT__W) 
                                           << 5U) | 
                                          (((IData)(vlSelf->testbench__DOT__E) 
                                            << 4U) 
                                           | (((IData)(vlSelf->testbench__DOT__dut__DOT__sword_state) 
                                               << 3U) 
                                              | (IData)(vlSelf->testbench__DOT__dut__DOT__state))))));
    vlSelf->testbench__DOT__dut__DOT__next_state = 
        Vtestbench__ConstPool__TABLE_h0c794650_0[__Vtableidx1];
    vlSelf->testbench__DOT__dut__DOT__next_sword_state 
        = ((IData)(vlSelf->testbench__DOT__dut__DOT__sword_state)
            ? (IData)(vlSelf->testbench__DOT__dut__DOT__sword_state)
            : ((3U == (IData)(vlSelf->testbench__DOT__dut__DOT__state)) 
               | (3U == (IData)(vlSelf->testbench__DOT__dut__DOT__next_state))));
}

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((5ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__reset)))) {
        if (VL_UNLIKELY(((((IData)(vlSelf->testbench__DOT__G0) 
                           << 1U) | (IData)(vlSelf->testbench__DOT__G1)) 
                         != (IData)(vlSelf->testbench__DOT__expected)))) {
            VL_WRITEF("Error: inputs = %b\n",4,(((IData)(vlSelf->testbench__DOT__N) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->testbench__DOT__S) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->testbench__DOT__E) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->testbench__DOT__W)))));
            vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                              + vlSelf->testbench__DOT__errors);
            VL_WRITEF(" outputs = %b %b (%b expected)\n",
                      1,vlSelf->testbench__DOT__G0,
                      1,(IData)(vlSelf->testbench__DOT__G1),
                      2,vlSelf->testbench__DOT__expected);
        }
        vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                             + vlSelf->testbench__DOT__vectornum);
        if (VL_UNLIKELY((0x12U == vlSelf->testbench__DOT__vectornum))) {
            VL_WRITEF("%10# tests completed with %10# errors\n",
                      32,vlSelf->testbench__DOT__vectornum,
                      32,vlSelf->testbench__DOT__errors);
            VL_FINISH_MT("adventure_tb.sv", 43, "");
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__dut__DOT__sword_state = 
        ((1U & (~ (IData)(vlSelf->testbench__DOT__reset))) 
         && (IData)(vlSelf->testbench__DOT__dut__DOT__next_sword_state));
    vlSelf->testbench__DOT__dut__DOT__state = ((IData)(vlSelf->testbench__DOT__reset)
                                                ? 0U
                                                : (IData)(vlSelf->testbench__DOT__dut__DOT__next_state));
    vlSelf->testbench__DOT__G0 = (5U == (IData)(vlSelf->testbench__DOT__dut__DOT__state));
    vlSelf->testbench__DOT__G1 = ((5U != (IData)(vlSelf->testbench__DOT__dut__DOT__state)) 
                                  && (6U == (IData)(vlSelf->testbench__DOT__dut__DOT__state)));
}

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8270553__0.resume("@(posedge testbench.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8270553__0.commit("@(posedge testbench.clk)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    Vtestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("adventure_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("adventure_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
