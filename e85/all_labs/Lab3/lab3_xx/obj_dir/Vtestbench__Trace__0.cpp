// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->testbench__DOT__la));
        bufp->chgBit(oldp+1,(vlSelf->testbench__DOT__lb));
        bufp->chgBit(oldp+2,(vlSelf->testbench__DOT__lc));
        bufp->chgBit(oldp+3,(vlSelf->testbench__DOT__ra));
        bufp->chgBit(oldp+4,(vlSelf->testbench__DOT__rb));
        bufp->chgBit(oldp+5,(vlSelf->testbench__DOT__rc));
        bufp->chgCData(oldp+6,(vlSelf->testbench__DOT__dut__DOT__state),3);
    }
    bufp->chgBit(oldp+7,(vlSelf->testbench__DOT__clk));
    bufp->chgBit(oldp+8,(vlSelf->testbench__DOT__reset));
    bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__left));
    bufp->chgBit(oldp+10,(vlSelf->testbench__DOT__right));
    bufp->chgCData(oldp+11,(vlSelf->testbench__DOT__expected),6);
    bufp->chgIData(oldp+12,(vlSelf->testbench__DOT__vectornum),32);
    bufp->chgIData(oldp+13,(vlSelf->testbench__DOT__errors),32);
    bufp->chgCData(oldp+14,(vlSelf->testbench__DOT__dut__DOT__next_state),3);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
