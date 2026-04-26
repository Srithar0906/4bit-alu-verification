`timescale 1ns/1ps

module alu_tb;

    reg  [3:0] a, b;
    reg  [2:0] opcode;
    wire [3:0] result;
    wire       carry, zero;

    integer pass_count, fail_count;

    alu uut (
        .a(a), .b(b),
        .opcode(opcode),
        .result(result),
        .carry(carry),
        .zero(zero)
    );

    initial begin
        $dumpfile("sim/waveform.vcd");
        $dumpvars(0, alu_tb);
    end

    initial begin
        pass_count = 0;
        fail_count = 0;

        $display("==============================");
        $display("   4-bit ALU Directed Tests   ");
        $display("==============================");

        // ── ADD ──────────────────────────────────
        $display("\n--- ADD ---");

        a=4;  b=4;  opcode=3'b000; #10;
        if(result==8 && carry==0) begin
            $display("PASS: ADD  4+4   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: ADD  4+4   expected 8, got %0d", result);
            fail_count=fail_count+1;
        end

        a=0;  b=0;  opcode=3'b000; #10;
        if(result==0 && carry==0 && zero==1) begin
            $display("PASS: ADD  0+0   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: ADD  0+0   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=15; b=0;  opcode=3'b000; #10;
        if(result==15 && carry==0) begin
            $display("PASS: ADD  15+0  = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: ADD  15+0  expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        a=15; b=1;  opcode=3'b000; #10;
        if(result==0 && carry==1) begin
            $display("PASS: ADD  15+1  = %0d (carry=1 overflow)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: ADD  15+1  expected 0 carry=1, got %0d carry=%b", result, carry);
            fail_count=fail_count+1;
        end

        a=15; b=15; opcode=3'b000; #10;
        if(result==14 && carry==1) begin
            $display("PASS: ADD  15+15 = %0d (carry=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: ADD  15+15 expected 14 carry=1, got %0d carry=%b", result, carry);
            fail_count=fail_count+1;
        end

        // ── SUB ──────────────────────────────────
        $display("\n--- SUB ---");

        a=7;  b=3;  opcode=3'b001; #10;
        if(result==4) begin
            $display("PASS: SUB  7-3   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: SUB  7-3   expected 4, got %0d", result);
            fail_count=fail_count+1;
        end

        a=5;  b=5;  opcode=3'b001; #10;
        if(result==0 && zero==1) begin
            $display("PASS: SUB  5-5   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: SUB  5-5   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=0;  b=0;  opcode=3'b001; #10;
        if(result==0 && zero==1) begin
            $display("PASS: SUB  0-0   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: SUB  0-0   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=3;  b=7;  opcode=3'b001; #10;
        if(result==4'b1100) begin
            $display("PASS: SUB  3-7   = %0d (underflow wraparound)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: SUB  3-7   expected 12 underflow, got %0d", result);
            fail_count=fail_count+1;
        end

        // ── AND ──────────────────────────────────
        $display("\n--- AND ---");

        a=4'hA; b=4'h5; opcode=3'b010; #10;
        if(result==0 && zero==1) begin
            $display("PASS: AND  A&5   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: AND  A&5   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'hF; b=4'hF; opcode=3'b010; #10;
        if(result==4'hF) begin
            $display("PASS: AND  F&F   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: AND  F&F   expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'hF; b=4'h0; opcode=3'b010; #10;
        if(result==0 && zero==1) begin
            $display("PASS: AND  F&0   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: AND  F&0   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        // ── OR ───────────────────────────────────
        $display("\n--- OR ---");

        a=4'hA; b=4'h5; opcode=3'b011; #10;
        if(result==4'hF) begin
            $display("PASS: OR   A|5   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: OR   A|5   expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        a=0;    b=0;    opcode=3'b011; #10;
        if(result==0 && zero==1) begin
            $display("PASS: OR   0|0   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: OR   0|0   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'hF; b=4'h0; opcode=3'b011; #10;
        if(result==4'hF) begin
            $display("PASS: OR   F|0   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: OR   F|0   expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        // ── NOT ──────────────────────────────────
        $display("\n--- NOT ---");

        a=4'b0100; b=0; opcode=3'b100; #10;
        if(result==4'b1011) begin
            $display("PASS: NOT  ~4    = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: NOT  ~4    expected 11, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'b0000; b=0; opcode=3'b100; #10;
        if(result==4'b1111) begin
            $display("PASS: NOT  ~0    = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: NOT  ~0    expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'b1111; b=0; opcode=3'b100; #10;
        if(result==4'b0000 && zero==1) begin
            $display("PASS: NOT  ~F    = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: NOT  ~F    expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        // ── XOR ──────────────────────────────────
        $display("\n--- XOR ---");

        a=4'hA; b=4'hA; opcode=3'b101; #10;
        if(result==0 && zero==1) begin
            $display("PASS: XOR  A^A   = %0d (zero=1)", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: XOR  A^A   expected 0, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'hA; b=4'h5; opcode=3'b101; #10;
        if(result==4'hF) begin
            $display("PASS: XOR  A^5   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: XOR  A^5   expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        a=4'h0; b=4'hF; opcode=3'b101; #10;
        if(result==4'hF) begin
            $display("PASS: XOR  0^F   = %0d", result);
            pass_count=pass_count+1;
        end else begin
            $display("FAIL: XOR  0^F   expected 15, got %0d", result);
            fail_count=fail_count+1;
        end

        // ── Summary ──────────────────────────────
        $display("\n==============================");
        $display(" PASSED: %0d / %0d", pass_count, pass_count+fail_count);
        $display(" FAILED: %0d / %0d", fail_count, pass_count+fail_count);
        $display("==============================");

        $finish;
    end

endmodule