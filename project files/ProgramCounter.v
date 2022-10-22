`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:36 04/12/2020 
// Design Name: 
// Module Name:    ProgramCounter 
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
module ProgramCounter (clk, count_enable, reset, load_address, jump_enable, jump_address, address);

// 16 - bit Program Counter
// Works on rising edge of clock
// Every input signal is active high

/* Inputs */
// clk regulates working of program counter
// count_enable increments the address value by 1 location
// reset resets counter to zero 
// load_address loads address on instruction address bus ( Harvard Architecture )
// jump_enable enables counter to take value of jump address as input
// jump_address bus takes address value to jump 

/* Outputs */
// address bus points value of next instruction to be executed from program memory

parameter word_size = 16; 			
parameter high_impedance = 16'hzzzz;
parameter zero = 16'h0000;

input clk, count_enable, reset, load_address, jump_enable;
input [word_size-1 : 0] jump_address; 		 

output [word_size-1 : 0] address;  

reg [word_size-1 : 0] temp_address;
reg jump_flag;

// Initializing reg variables
initial begin
	temp_address = zero;
	jump_flag = 1'b0;
end

// If load_address is low then output address bus is high impedance
assign address = (load_address === 1'b1) ? temp_address : high_impedance;

always @ (posedge clk) begin
	case ({reset, jump_enable, count_enable})
		3'b000 : begin
			temp_address = temp_address;
		end
		3'b001 : begin
			temp_address = temp_address + 1;
		end
		3'b010 : begin
			temp_address = jump_address;
		end
		3'b011 : begin
			if (address === jump_address) 
				temp_address = temp_address + 1;
			// else load jump address first then increment it
			else 
				temp_address = jump_address;
		end
		3'b100 : begin
			temp_address = zero;
		end
		3'b101 : begin
			temp_address = zero;
		end
		3'b110 : begin
			temp_address = zero;
		end
		3'b111 : begin
			temp_address = zero;
		end
	endcase
end	
endmodule

