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
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x722e7476U;
    __Vtemp_1[1U] = 0x6f6c6c65U;
    __Vtemp_1[2U] = 0x6f6e7472U;
    __Vtemp_1[3U] = 0x63U;
    VL_READMEM_N(false, 40, 10001, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->testbench__DOT__testvectors)
                 , 0, ~0ULL);
    vlSelf->testbench__DOT__vectornum = 0U;
    vlSelf->testbench__DOT__errors = 0U;
    vlSelf->testbench__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(0x16ULL, nullptr, 
                                       "controller_tb.sv", 
                                       63);
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
                                           "controller_tb.sv", 
                                           54);
        vlSelf->testbench__DOT__clk = 0U;
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "controller_tb.sv", 
                                           54);
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
                                                           "controller_tb.sv", 
                                                           67);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "controller_tb.sv", 
                                           69);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->testbench__DOT__op = (0x7fU & (IData)(
                                                      (((0x2710U 
                                                         >= 
                                                         (0x3fffU 
                                                          & vlSelf->testbench__DOT__vectornum))
                                                         ? 
                                                        vlSelf->testbench__DOT__testvectors
                                                        [
                                                        (0x3fffU 
                                                         & vlSelf->testbench__DOT__vectornum)]
                                                         : 0ULL) 
                                                       >> 0x15U)));
        vlSelf->testbench__DOT__Funct3 = (7U & (IData)(
                                                       (((0x2710U 
                                                          >= 
                                                          (0x3fffU 
                                                           & vlSelf->testbench__DOT__vectornum))
                                                          ? 
                                                         vlSelf->testbench__DOT__testvectors
                                                         [
                                                         (0x3fffU 
                                                          & vlSelf->testbench__DOT__vectornum)]
                                                          : 0ULL) 
                                                        >> 0x12U)));
        vlSelf->testbench__DOT__Funct7b5 = (1U & (IData)(
                                                         (((0x2710U 
                                                            >= 
                                                            (0x3fffU 
                                                             & vlSelf->testbench__DOT__vectornum))
                                                            ? 
                                                           vlSelf->testbench__DOT__testvectors
                                                           [
                                                           (0x3fffU 
                                                            & vlSelf->testbench__DOT__vectornum)]
                                                            : 0ULL) 
                                                          >> 0x11U)));
        vlSelf->testbench__DOT__Zero = (1U & (IData)(
                                                     (((0x2710U 
                                                        >= 
                                                        (0x3fffU 
                                                         & vlSelf->testbench__DOT__vectornum))
                                                        ? 
                                                       vlSelf->testbench__DOT__testvectors
                                                       [
                                                       (0x3fffU 
                                                        & vlSelf->testbench__DOT__vectornum)]
                                                        : 0ULL) 
                                                      >> 0x10U)));
        vlSelf->testbench__DOT__expected = (0xffffU 
                                            & (IData)(
                                                      ((0x2710U 
                                                        >= 
                                                        (0x3fffU 
                                                         & vlSelf->testbench__DOT__vectornum))
                                                        ? 
                                                       vlSelf->testbench__DOT__testvectors
                                                       [
                                                       (0x3fffU 
                                                        & vlSelf->testbench__DOT__vectornum)]
                                                        : 0ULL)));
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtestbench__ConstPool__TABLE_h1ef1ab73_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vtestbench__ConstPool__TABLE_he0cb80b8_0;

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
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
    __Vtableidx3 = vlSelf->testbench__DOT__op;
    vlSelf->testbench__DOT__ImmSrc = Vtestbench__ConstPool__TABLE_h1ef1ab73_0
        [__Vtableidx3];
    __Vtableidx1 = (((IData)(vlSelf->testbench__DOT__op) 
                     << 4U) | (IData)(vlSelf->testbench__DOT__dut__DOT__state));
    vlSelf->testbench__DOT__dut__DOT__next_state = 
        Vtestbench__ConstPool__TABLE_he0cb80b8_0[__Vtableidx1];
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

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->testbench__DOT__dut__DOT__state = ((IData)(vlSelf->testbench__DOT__reset)
                                                ? 0U
                                                : (IData)(vlSelf->testbench__DOT__dut__DOT__next_state));
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__reset)))) {
        vlSelf->testbench__DOT__actual = (((IData)(vlSelf->testbench__DOT__ImmSrc) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->testbench__DOT__ALUSrcA) 
                                              << 0xcU) 
                                             | (((IData)(vlSelf->testbench__DOT__ALUSrcB) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->testbench__DOT__ResultSrc) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->testbench__DOT__AdrSrc) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->testbench__DOT__ALUControl) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->testbench__DOT__IRWrite) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->testbench__DOT__PCWrite) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->testbench__DOT__RegWrite) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->testbench__DOT__MemWrite))))))))));
        if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__actual) 
                         != (IData)(vlSelf->testbench__DOT__expected)))) {
            VL_WRITEF("Error on vector %10#: inputs: op = %x funct3 = %x funct7b5 = %x; outputs = %x (%x expected)\n",
                      32,vlSelf->testbench__DOT__vectornum,
                      7,(IData)(vlSelf->testbench__DOT__op),
                      3,vlSelf->testbench__DOT__Funct3,
                      1,(IData)(vlSelf->testbench__DOT__Funct7b5),
                      16,vlSelf->testbench__DOT__actual,
                      16,(IData)(vlSelf->testbench__DOT__expected));
            vlSelf->testbench__DOT__errors = ((IData)(1U) 
                                              + vlSelf->testbench__DOT__errors);
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__ImmSrc) 
                             != (3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 0xeU))))) {
                VL_WRITEF("   ImmSrc = %b.  Expected %b\n",
                          2,vlSelf->testbench__DOT__ImmSrc,
                          2,(3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 0xeU)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__ALUSrcA) 
                             != (3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 0xcU))))) {
                VL_WRITEF("   ALUSrcA = %b.  Expected %b\n",
                          2,vlSelf->testbench__DOT__ALUSrcA,
                          2,(3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 0xcU)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__ALUSrcB) 
                             != (3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 0xaU))))) {
                VL_WRITEF("   ALUSrcB = %b.  Expected %b\n",
                          2,vlSelf->testbench__DOT__ALUSrcB,
                          2,(3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 0xaU)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__ResultSrc) 
                             != (3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 8U))))) {
                VL_WRITEF("   ResultSrc = %b.  Expected %b\n",
                          2,vlSelf->testbench__DOT__ResultSrc,
                          2,(3U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 8U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__AdrSrc) 
                             != (1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 7U))))) {
                VL_WRITEF("   AdrSrc = %b.  Expected %b\n",
                          1,vlSelf->testbench__DOT__AdrSrc,
                          1,(1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 7U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__ALUControl) 
                             != (7U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 4U))))) {
                VL_WRITEF("   ALUControl = %b.  Expected %b\n",
                          3,vlSelf->testbench__DOT__ALUControl,
                          3,(7U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 4U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__IRWrite) 
                             != (1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 3U))))) {
                VL_WRITEF("   IRWrite = %b.  Expected %b\n",
                          1,vlSelf->testbench__DOT__IRWrite,
                          1,(1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 3U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__PCWrite) 
                             != (1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 2U))))) {
                VL_WRITEF("   PCWrite = %b.  Expected %b\n",
                          1,vlSelf->testbench__DOT__PCWrite,
                          1,(1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 2U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__RegWrite) 
                             != (1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                       >> 1U))))) {
                VL_WRITEF("   RegWrite = %b.  Expected %b\n",
                          1,vlSelf->testbench__DOT__RegWrite,
                          1,(1U & ((IData)(vlSelf->testbench__DOT__expected) 
                                   >> 1U)));
            }
            if (VL_UNLIKELY(((IData)(vlSelf->testbench__DOT__MemWrite) 
                             != (1U & (IData)(vlSelf->testbench__DOT__expected))))) {
                VL_WRITEF("   MemWrite = %b.  Expected %b\n",
                          1,vlSelf->testbench__DOT__MemWrite,
                          1,(1U & (IData)(vlSelf->testbench__DOT__expected)));
            }
        }
        vlSelf->testbench__DOT__vectornum = ((IData)(1U) 
                                             + vlSelf->testbench__DOT__vectornum);
        if (VL_UNLIKELY((0x28U == vlSelf->testbench__DOT__vectornum))) {
            VL_WRITEF("%10# tests completed with %10# errors\n",
                      32,vlSelf->testbench__DOT__vectornum,
                      32,vlSelf->testbench__DOT__errors);
            VL_STOP_MT("controller_tb.sv", 100, "");
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->testbench__DOT__op) 
                     << 4U) | (IData)(vlSelf->testbench__DOT__dut__DOT__state));
    vlSelf->testbench__DOT__dut__DOT__next_state = 
        Vtestbench__ConstPool__TABLE_he0cb80b8_0[__Vtableidx1];
    __Vtableidx3 = vlSelf->testbench__DOT__op;
    vlSelf->testbench__DOT__ImmSrc = Vtestbench__ConstPool__TABLE_h1ef1ab73_0
        [__Vtableidx3];
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

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
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
            VL_FATAL_MT("controller_tb.sv", 5, "", "NBA region did not converge.");
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
                VL_FATAL_MT("controller_tb.sv", 5, "", "Active region did not converge.");
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
