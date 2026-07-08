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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->testbench__DOT__op),7);
        bufp->chgCData(oldp+1,(vlSelf->testbench__DOT__Funct3),3);
        bufp->chgBit(oldp+2,(vlSelf->testbench__DOT__Funct7b5));
        bufp->chgBit(oldp+3,(vlSelf->testbench__DOT__Zero));
        bufp->chgSData(oldp+4,(vlSelf->testbench__DOT__expected),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+5,(vlSelf->testbench__DOT__ALUSrcA),2);
        bufp->chgCData(oldp+6,(vlSelf->testbench__DOT__ALUSrcB),2);
        bufp->chgCData(oldp+7,(vlSelf->testbench__DOT__ResultSrc),2);
        bufp->chgBit(oldp+8,(vlSelf->testbench__DOT__AdrSrc));
        bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__IRWrite));
        bufp->chgBit(oldp+10,(vlSelf->testbench__DOT__PCWrite));
        bufp->chgBit(oldp+11,(vlSelf->testbench__DOT__RegWrite));
        bufp->chgBit(oldp+12,(vlSelf->testbench__DOT__MemWrite));
        bufp->chgCData(oldp+13,(vlSelf->testbench__DOT__dut__DOT__ALUOp),2);
        bufp->chgBit(oldp+14,(vlSelf->testbench__DOT__dut__DOT__Branch));
        bufp->chgCData(oldp+15,(vlSelf->testbench__DOT__dut__DOT__state),4);
    }
    bufp->chgBit(oldp+16,(vlSelf->testbench__DOT__clk));
    bufp->chgBit(oldp+17,(vlSelf->testbench__DOT__reset));
    bufp->chgCData(oldp+18,(vlSelf->testbench__DOT__ImmSrc),2);
    bufp->chgCData(oldp+19,(vlSelf->testbench__DOT__ALUControl),3);
    bufp->chgIData(oldp+20,(vlSelf->testbench__DOT__vectornum),32);
    bufp->chgIData(oldp+21,(vlSelf->testbench__DOT__errors),32);
    bufp->chgSData(oldp+22,(vlSelf->testbench__DOT__actual),16);
    bufp->chgCData(oldp+23,(vlSelf->testbench__DOT__dut__DOT__next_state),4);
    bufp->chgBit(oldp+24,(((IData)(vlSelf->testbench__DOT__dut__DOT__PCUpdate) 
                           | ((IData)(vlSelf->testbench__DOT__Zero) 
                              & (IData)(vlSelf->testbench__DOT__dut__DOT__Branch)))));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
