`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:49:15 04/13/2020 
// Design Name: 
// Module Name:    Register 
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
module Register (clk, load, reset, in, out);

// 16 - bit Regiuster
// Works on rising edge of clock
// Every input signal is active high

/* Inputs */
// clk regulates working of register
// load to control writing to register 
// reset to clear contents of register
// in provides data for storing in register

/* Output */
// out provides stored data in register 

parameter word_size = 16;
parameter high_impedance = 16'hzzzz;
parameter zero = 16'h0000;

input clk, load, reset;
input [word_size-1 : 0] in;

output reg [word_size-1 : 0] out;

initial begin
	out = 16'h0000;
end

always @ (posedge clk) begin
	if (reset === 1'b1)
		out <= zero;
		
	else if (load === 1'b1)
		out <= in;
		
	else
		out <= out;
end

endmodule

