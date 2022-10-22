`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:44:44 04/16/2020 
// Design Name: 
// Module Name:    Decoder 
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
module Decoder (clk, instruction, pre_data, data, address, src_addr, dst_addr, reg_enable, reg_mode, 
                memory_enable, memory_write_enable, alu_enable, alu_reset, alu_mode, alu_function, 
					 alu2in_enable, gpr_acc_enable, ir_reset, pc_reset);
			  
// Decoder (Control Unit) is stage after ir register
// It decodes instruction_set and generates control signals
// Instructions finishes execution after 2 cycles 
// It controls primary working of individual modules of processor
// Works on positive edge of clock

/* Inputs */
// clk regulates working of control unit
// instruction provides instruction_set to decode
// pre-data provides data/address before hand from ir 

/* Outputs */
// data is conneted to data_bus
// address is connected to address_bus
// src_addr provides address of register for sending data
// dst_addr provides address of register for receiving data
// reg_enable controls working of gpr
// reg_mode used to toggle working modes of gpr
// memory_enable to control working of memory
// memory_write_enable to decide reading or writing operation 
// alu_enable to control working of alu
// alu_reset to clear contents of alu
// alu_mode to control alu (1 for Arithmetic and 0 for Logic operations)
// alu_function to select operation to perform by alu
// alu2in_enable controls 2nd input to alu (data bus or R1) from gpr
// gpr_acc_enable controls updating R0 register (accumulator)
// ir_reset to clear contents of instruction register

parameter word_size = 16;
parameter high_impedance = 16'hzzzz;

// Load Instructions
parameter LDM = 8'h01;     // load data from given memory address to register
parameter LDR = 8'h02;     // copy data from given register to another register 
parameter LDV = 8'h03;     // load given value/data to register

// Store Instructions
parameter STR = 8'h04;     // store data from given register to memory address

// Arithmetic Instructions
parameter ADR = 8'h10; 
parameter ADD = 8'h11;
parameter SBR = 8'h12;
parameter SUB = 8'h13;
parameter INC = 8'h14;
parameter DEC = 8'h15;

// Logic Instructions
parameter XOR_op = 8'h1f;
parameter AND_op = 8'h1e;
parameter OR_op = 8'h1d;
parameter XNOR_op = 8'h1c;
parameter NAND_op = 8'h1b;
parameter NOR_op = 8'h1a;
parameter INV_op = 8'h19;

// Other Instructions
parameter NOP = 8'h00;
parameter REG = 8'hff; // 

input clk;
input [word_size-1 : 0] instruction, pre_data;

output reg [word_size-1 : 0] data, address;
output reg [2 : 0] src_addr, dst_addr, reg_mode;
output reg reg_enable, memory_enable, memory_write_enable, alu_enable, alu_reset, alu_mode;
output reg [3 : 0] alu_function;
output reg alu2in_enable, gpr_acc_enable, ir_reset, pc_reset;

reg mode;

// initalizing reg variables
initial begin
	data = high_impedance;
	address = high_impedance;
	src_addr = 3'bzzz;
	dst_addr = 3'bzzz;
	reg_mode = 3'bzzz;
	reg_enable = 1'bz;
	memory_enable = 1'bz;
	memory_write_enable = 1'bz;
	alu_enable = 1'bz;
	alu_reset = 1'bz;
	alu_mode = 1'bz;
	alu_function = 4'hz;
	alu2in_enable = 1'bz;
	gpr_acc_enable = 1'bz;
	ir_reset = 1'bz;
	pc_reset = 1'bz;
	mode = 1'b0;
end

always @ (posedge clk) begin
	if (mode === 1'b0) begin
		data = high_impedance;
		address = high_impedance;
		src_addr = 3'b000;
		dst_addr = 3'b000;
		reg_mode = 3'b000;
		reg_enable = 1'b0;
		memory_enable = 1'b0;
		memory_write_enable = 1'b0;
		alu_enable = 1'b0;
		alu_reset = 1'b0;
		alu_mode = 1'b0;
		alu_function = 4'h0;
		alu2in_enable = 1'b0;
		gpr_acc_enable = 1'b0;
		ir_reset = 1'b0;
		pc_reset = 1'b0;
		
		case (instruction [7 : 0])
		   REG: begin
				src_addr = instruction [10 : 8];
				reg_enable = 1;
				reg_mode = 3'b001; // read mode
				mode = 1'b1;
			end
			NOP: begin
				mode = 1'b0;
			end
			
			LDM: begin
				address = pre_data;
				memory_enable = 1'b1;
				dst_addr = instruction [10 : 8];
				reg_enable = 1'b1;
				reg_mode = 3'b010; // write mode
				mode = 1'b1;
			end
			
			LDR: begin
				src_addr = instruction [10 : 8];
				dst_addr = pre_data[2 : 0];
				reg_enable = 1'b1;
				reg_mode = 3'b100; // reg transfer
				mode = 1'b1;
			end
			
			LDV: begin
				dst_addr = instruction [10 : 8];
				data = pre_data;
				reg_enable = 1'b1;
				reg_mode = 3'b010; // write
				mode = 1'b1;
			end
			
			STR: begin
				src_addr = instruction [10 : 8];
				reg_enable = 1'b1;
				reg_mode = 3'b001; // read
				memory_write_enable = 1'b1;
				address = pre_data;
				memory_enable = 1'b1;		
				mode = 1'b1;
			end
			
			ADR: begin
				alu_enable = 1'b1;
				alu2in_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h0;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			
			ADD: begin	
				data = pre_data;
				alu_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h0;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end

			SBR: begin
				alu_enable = 1'b1;
				alu2in_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h1;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			
			SUB: begin	
				data = pre_data;;
				alu_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h1;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			
			INC: begin
				alu_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h2;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			
			DEC: begin
				alu_enable = 1'b1;
				alu_mode = 1'b1;
				alu_function = 4'h3;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			
			XOR_op: begin	
			   data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h0;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			AND_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h1;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			OR_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h2;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			XNOR_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h3;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			NAND_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h4;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			NOR_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'h5;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
			INV_op: begin
				data = pre_data;;
				alu_enable = 1'b1;
				alu_function = 4'hd;
				gpr_acc_enable = 1'b1;
				mode = 1'b1;
			end
		endcase
	end
	
	else // mode = 1
		mode = 1'b0;
	
end

endmodule

	