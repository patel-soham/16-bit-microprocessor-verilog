`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:30:01 04/16/2020 
// Design Name: 
// Module Name:    FlagRegister 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FlagRegister (clk, reset, in, out);

// 6 - bit Flag Register
// Works on positive edge of clock
// Input signals are active high

/* Inputs */
// clk regulates working of register
// reset overrides all values stored in register to zero
// in provides input data to register

/* Output */
// out provides flag register contents

/* Flag Register Contents */
// R[0] = carry flag
// R[1] = zero flag
// R[2] = sign flag
// R[3] = greater_than flag
// R[4] = equal flag
// R[5] = parity (even) flag 
    
input clk, reset;
input [ 5 : 0 ] in;
output reg [ 5 : 0 ] out; 

// initialize reg variables
initial begin
	out = 0;
end

always @ (posedge clk) begin
	if (reset === 1'b1) begin
		out <= 0;
	end
	out [ 0 ] <= in [ 0 ]; // carry
	out [ 1 ] <= in [ 1 ]; // zero
   out [ 2 ] <= in [ 2 ]; // sign 
   out [ 3 ] <= in [ 3 ]; // greater_than 
   out [ 4 ] <= in [ 4 ]; // equal 
   out [ 5 ] <= in [ 5 ]; // parity 
end

endmodule
