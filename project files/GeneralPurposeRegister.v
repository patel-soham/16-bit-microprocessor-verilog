`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:16:55 04/16/2020 
// Design Name: 
// Module Name:    GeneralPurposeRegister 
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
module GeneralPurposeRegister (clk, enable, alu2in_enable, acc_enable, mode, 
                               src_addr, dst_addr, acc_input, alu_1st_in, alu_2nd_in, data);

// 8 16-bit Genreal Purpose Registers (R0 to R7) 
// Works on positive edge of clock
// Input signals are active high
// R0 is accumulator where all alu results are 
// placed after alu operation
// R0 and R1 acts as alu 2 inputs

/* Inputs */
// clk regulates working of gpr
// enable controls working of gpr
// alu2in_enable controls 2nd input to alu (data bus or R1)
// acc_enable controls updating R0 register (accumulator)
// mode used to toggle working modes of register
// src_addr provides address of register for sending data
// dst_addr provides address of register for receiving data
// acc_input provides alu result data to store

/* Outputs */
// alu_1st_in provides 1st input to alu from R0 (accumulator)
// alu_2nd_in provides 2nd input to alu from R1 

/* Inouts */
// data bus for input/output of data from registers

parameter word_size = 16;
parameter high_impedance = 16'hzzzz;
parameter zero = 16'h0000;

input clk, enable, alu2in_enable, acc_enable;
input [2 : 0] mode, src_addr, dst_addr;
input [word_size-1 : 0] acc_input;

output [word_size-1 : 0] alu_1st_in, alu_2nd_in;

inout [word_size-1 : 0] data;

reg [word_size - 1 : 0] register [7 : 0]; 
reg [word_size - 1 : 0] data_out;         

// Initializing registers and reg variables
initial begin
	register[0] = zero;     
	register[1] = zero;
	register[2] = zero;
	register[3] = zero;
	register[4] = zero;
	register[5] = zero;
	register[6] = zero;
	register[7] = zero;
	data_out = high_impedance;   	
end

assign alu_1st_in = register[0];
// if alu2in_enable = 1 then alu 2nd input is from R1
assign alu_2nd_in = (alu2in_enable === 1'b1) ? register[1] : high_impedance;

assign data = (enable === 1'b1 && mode === 3'b001) ? data_out : high_impedance;

always @ (posedge clk) begin
	if (enable) begin
	case (mode)
		3'b001 : begin
			data_out = register[ src_addr ]; // read mode
		end
		
		3'b010 : begin
			register[ dst_addr ] = data; // write mode
		end
		
		3'b011 : begin
			register[ dst_addr ] = 16'h0000; // reset mode
		end
		
		3'b100 : begin
			register[ dst_addr ] = register[ src_addr ]; // register transfer mode
		end	
		default : begin
			data_out = high_impedance;
		end
	endcase
	end
	// allow updating accumulator if acc_enable = 1
	if (acc_enable === 1'b1) 
		register[ 0 ] = acc_input;
end

endmodule

