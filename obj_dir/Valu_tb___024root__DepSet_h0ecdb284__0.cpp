// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_tb.h for the primary calling header

#include "Valu_tb__pch.h"
#include "Valu_tb___024root.h"

VL_ATTR_COLD void Valu_tb___024root___eval_initial__TOP(Valu_tb___024root* vlSelf);
VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf);
VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__1(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_initial(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_tb___024root___eval_initial__TOP(vlSelf);
    Valu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Valu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__0(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__pass_count = 0U;
    vlSelfRef.alu_tb__DOT__fail_count = 0U;
    VL_WRITEF_NX("==============================\n   4-bit ALU Directed Tests   \n==============================\n\n--- ADD ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 4U;
    vlSelfRef.alu_tb__DOT__b = 4U;
    vlSelfRef.alu_tb__DOT__opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         37);
    if (((8U == (IData)(vlSelfRef.alu_tb__DOT__result)) 
         & (~ (IData)(vlSelfRef.alu_tb__DOT__carry)))) {
        VL_WRITEF_NX("PASS: ADD  4+4   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: ADD  4+4   expected 8, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         46);
    if ((IData)(((0U == (IData)(vlSelfRef.alu_tb__DOT__result)) 
                 & (~ (IData)(vlSelfRef.alu_tb__DOT__carry))))) {
        VL_WRITEF_NX("PASS: ADD  0+0   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: ADD  0+0   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         55);
    if (((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result)) 
         & (~ (IData)(vlSelfRef.alu_tb__DOT__carry)))) {
        VL_WRITEF_NX("PASS: ADD  15+0  = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: ADD  15+0  expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 1U;
    vlSelfRef.alu_tb__DOT__opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         64);
    if (((0U == (IData)(vlSelfRef.alu_tb__DOT__result)) 
         & (IData)(vlSelfRef.alu_tb__DOT__carry))) {
        VL_WRITEF_NX("PASS: ADD  15+1  = %0# (carry=1 overflow)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: ADD  15+1  expected 0 carry=1, got %0# carry=%b\n",0,
                     4,vlSelfRef.alu_tb__DOT__result,
                     1,(IData)(vlSelfRef.alu_tb__DOT__carry));
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0xfU;
    vlSelfRef.alu_tb__DOT__opcode = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         73);
    if (((0xeU == (IData)(vlSelfRef.alu_tb__DOT__result)) 
         & (IData)(vlSelfRef.alu_tb__DOT__carry))) {
        VL_WRITEF_NX("PASS: ADD  15+15 = %0# (carry=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: ADD  15+15 expected 14 carry=1, got %0# carry=%b\n",0,
                     4,vlSelfRef.alu_tb__DOT__result,
                     1,(IData)(vlSelfRef.alu_tb__DOT__carry));
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- SUB ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 7U;
    vlSelfRef.alu_tb__DOT__b = 3U;
    vlSelfRef.alu_tb__DOT__opcode = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         83);
    if ((4U == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: SUB  7-3   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: SUB  7-3   expected 4, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 5U;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__opcode = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         92);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: SUB  5-5   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: SUB  5-5   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         101);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: SUB  0-0   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: SUB  0-0   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 3U;
    vlSelfRef.alu_tb__DOT__b = 7U;
    vlSelfRef.alu_tb__DOT__opcode = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         110);
    if ((0xcU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: SUB  3-7   = %0# (underflow wraparound)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: SUB  3-7   expected 12 underflow, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- AND ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__opcode = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         120);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: AND  A&5   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: AND  A&5   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0xfU;
    vlSelfRef.alu_tb__DOT__opcode = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         129);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: AND  F&F   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: AND  F&F   expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         138);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: AND  F&0   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: AND  F&0   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- OR ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__opcode = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         148);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: OR   A|5   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: OR   A|5   expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         157);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: OR   0|0   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: OR   0|0   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         166);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: OR   F|0   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: OR   F|0   expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- NOT ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 4U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         176);
    if ((0xbU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: NOT  ~4    = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: NOT  ~4    expected 11, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         185);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: NOT  ~0    = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: NOT  ~0    expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xfU;
    vlSelfRef.alu_tb__DOT__b = 0U;
    vlSelfRef.alu_tb__DOT__opcode = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         194);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: NOT  ~F    = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: NOT  ~F    expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n--- XOR ---\n",0);
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 0xaU;
    vlSelfRef.alu_tb__DOT__opcode = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         204);
    if ((IData)((0U == (IData)(vlSelfRef.alu_tb__DOT__result)))) {
        VL_WRITEF_NX("PASS: XOR  A^A   = %0# (zero=1)\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: XOR  A^A   expected 0, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0xaU;
    vlSelfRef.alu_tb__DOT__b = 5U;
    vlSelfRef.alu_tb__DOT__opcode = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         213);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: XOR  A^5   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: XOR  A^5   expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    vlSelfRef.alu_tb__DOT__a = 0U;
    vlSelfRef.alu_tb__DOT__b = 0xfU;
    vlSelfRef.alu_tb__DOT__opcode = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         222);
    if ((0xfU == (IData)(vlSelfRef.alu_tb__DOT__result))) {
        VL_WRITEF_NX("PASS: XOR  0^F   = %0#\n",0,4,
                     vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__pass_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__pass_count);
    } else {
        VL_WRITEF_NX("FAIL: XOR  0^F   expected 15, got %0#\n",0,
                     4,vlSelfRef.alu_tb__DOT__result);
        vlSelfRef.alu_tb__DOT__fail_count = ((IData)(1U) 
                                             + vlSelfRef.alu_tb__DOT__fail_count);
    }
    VL_WRITEF_NX("\n==============================\n DIRECTED TESTS\n PASSED: %0d / %0d\n FAILED: %0d / %0d\n==============================\n",0,
                 32,vlSelfRef.alu_tb__DOT__pass_count,
                 32,(vlSelfRef.alu_tb__DOT__pass_count 
                     + vlSelfRef.alu_tb__DOT__fail_count),
                 32,vlSelfRef.alu_tb__DOT__fail_count,
                 32,(vlSelfRef.alu_tb__DOT__pass_count 
                     + vlSelfRef.alu_tb__DOT__fail_count));
}

VL_INLINE_OPT VlCoroutine Valu_tb___024root___eval_initial__TOP__Vtiming__1(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    vlSelfRef.alu_tb__DOT__rand_pass = 0U;
    vlSelfRef.alu_tb__DOT__rand_fail = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4c4b40ULL, 
                                         nullptr, "tb/alu_tb.v", 
                                         243);
    VL_WRITEF_NX("\n==============================\n   4-bit ALU Random Tests     \n==============================\n",0);
    alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0x1f4U;
    while (VL_LTS_III(32, 0U, alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        vlSelfRef.alu_tb__DOT__a = (0xfU & VL_RANDOM_I());
        vlSelfRef.alu_tb__DOT__b = (0xfU & VL_RANDOM_I());
        vlSelfRef.alu_tb__DOT__opcode = (7U & VL_MODDIVS_III(32, (IData)(
                                                                         VL_RANDOM_I()), (IData)(6U)));
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb/alu_tb.v", 
                                             254);
        vlSelfRef.alu_tb__DOT__expected = (0xfU & (
                                                   (4U 
                                                    & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                      ^ (IData)(vlSelfRef.alu_tb__DOT__b))
                                                      : 
                                                     (~ (IData)(vlSelfRef.alu_tb__DOT__a))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                      | (IData)(vlSelfRef.alu_tb__DOT__b))
                                                      : 
                                                     ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                      ? 
                                                     ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                      - (IData)(vlSelfRef.alu_tb__DOT__b))
                                                      : 
                                                     ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                      + (IData)(vlSelfRef.alu_tb__DOT__b))))));
        if (VL_LIKELY(((IData)(vlSelfRef.alu_tb__DOT__result) 
                       == (IData)(vlSelfRef.alu_tb__DOT__expected)))) {
            vlSelfRef.alu_tb__DOT__rand_pass = ((IData)(1U) 
                                                + vlSelfRef.alu_tb__DOT__rand_pass);
        } else {
            vlSelfRef.alu_tb__DOT__rand_fail = ((IData)(1U) 
                                                + vlSelfRef.alu_tb__DOT__rand_fail);
            VL_WRITEF_NX("FAIL: op=%0# a=%0# b=%0# expected=%0# got=%0#\n",0,
                         3,vlSelfRef.alu_tb__DOT__opcode,
                         4,(IData)(vlSelfRef.alu_tb__DOT__a),
                         4,vlSelfRef.alu_tb__DOT__b,
                         4,(IData)(vlSelfRef.alu_tb__DOT__expected),
                         4,vlSelfRef.alu_tb__DOT__result);
        }
        alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (alu_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n==============================\n RANDOM TESTS (500 vectors)\n PASSED: %0d / 500\n FAILED: %0d / 500\n==============================\n",0,
                 32,vlSelfRef.alu_tb__DOT__rand_pass,
                 32,vlSelfRef.alu_tb__DOT__rand_fail);
    VL_FINISH_MT("tb/alu_tb.v", 281, "");
}

void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf);

void Valu_tb___024root___eval_act(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Valu_tb___024root___act_sequent__TOP__0(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_tb__DOT__carry = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.alu_tb__DOT__opcode) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.alu_tb__DOT__opcode) 
                      >> 1U)))) {
            vlSelfRef.alu_tb__DOT__carry = (1U & ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                   ? 
                                                  (1U 
                                                   & (((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                       - (IData)(vlSelfRef.alu_tb__DOT__b)) 
                                                      >> 4U))
                                                   : 
                                                  (1U 
                                                   & (((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                       + (IData)(vlSelfRef.alu_tb__DOT__b)) 
                                                      >> 4U))));
        }
    }
    vlSelfRef.alu_tb__DOT__result = (0xfU & ((4U & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                              ? ((2U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                   ? 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                   ^ (IData)(vlSelfRef.alu_tb__DOT__b))
                                                   : 
                                                  (~ (IData)(vlSelfRef.alu_tb__DOT__a))))
                                              : ((2U 
                                                  & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                   ? 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                   | (IData)(vlSelfRef.alu_tb__DOT__b))
                                                   : 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__b)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.alu_tb__DOT__opcode))
                                                   ? 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                   - (IData)(vlSelfRef.alu_tb__DOT__b))
                                                   : 
                                                  ((IData)(vlSelfRef.alu_tb__DOT__a) 
                                                   + (IData)(vlSelfRef.alu_tb__DOT__b))))));
}

void Valu_tb___024root___eval_nba(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Valu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Valu_tb___024root___timing_resume(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Valu_tb___024root___eval_triggers__act(Valu_tb___024root* vlSelf);

bool Valu_tb___024root___eval_phase__act(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu_tb___024root___timing_resume(vlSelf);
        Valu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_tb___024root___eval_phase__nba(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__nba(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_tb___024root___dump_triggers__act(Valu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_tb___024root___eval(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/alu_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/alu_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_tb___024root___eval_debug_assertions(Valu_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
