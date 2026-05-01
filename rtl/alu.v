`timescale 1ns/1ps

module alu (
    input  [3:0] a,
    input  [3:0] b,
    input  [2:0] opcode,
    output reg [3:0] result,
    output reg       carry,
    output wire      zero
);

    assign zero = (result == 4'b0000);

    always @(*) begin
        carry = 1'b0;
        case (opcode)
            3'b000: {carry, result} = a + b;
            3'b001: {carry, result} = a - b;
            3'b010: result = a & b;
            3'b011: result = a | b;
            3'b100: result = ~a;
            3'b101: result = a ^ b;
            default: result = 4'b0000;
        endcase
    end

endmodule
