module alu( input [3:0]a,[3:0]b,[2:0] opcode, output reg[3:0] result , reg carry, zero);
assign zero = (result == 4'b0000);
always @(*) begin
carry=0;
case(opcode) 
3'b000: {carry,result}=a+b;
3'b001: {carry,result}=a-b;
3'b010: result=a&b;
3'b011: result=a|b;
3'b100: result=a^b;
3'b101: result=~a;
default:result= 4'b0000;
endcase
end
endmodule
