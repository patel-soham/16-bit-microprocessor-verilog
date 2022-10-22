`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:34:30 04/13/2020 
// Design Name: 
// Module Name:    InstructionRegister 
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
module InstructionRegister (clk, write_enable, reset, data_in, data_out, pre_data_out);

// 16 - bit Instruction Register
// 4 stage prefetch unit
// Works on rising edge of clock
// Every input signal is active high

/* Inputs */
// clk regulates working of memory
// write_enable to enable writing to register
// reset to clear contents of register
// data_in is input data (machine code from program memory)

/* Outputs */
// data_out is output data (instruction set) from instruction register to decoder module

parameter word_size = 16; 			
parameter high_impedance = 16'hzzzz;
parameter zero = 16'h0000;

input clk, write_enable, reset;
input [word_size-1 : 0] data_in;

output [word_size-1 : 0] data_out, pre_data_out;

wire [word_size-1 : 0] data1, data2;


Register R1(.clk (clk), 
            .load (write_enable), 
				.reset (reset), 
				.in (data_in), 
				.out (data1)
				);
				
Register R2(.clk (clk), 
            .load (write_enable), 
				.reset (reset), 
				.in (data1), 
				.out (data2)
				);

Register R3(.clk (clk), 
            .load (write_enable), 
				.reset (reset), 
				.in (data2), 
				.out (pre_data_out)
				);
				
Register R4(.clk (clk), 
            .load (write_enable), 
				.reset (reset), 
				.in (pre_data_out), 
				.out (data_out)
				);

endmodule
