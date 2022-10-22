`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:36:19 04/19/2020
// Design Name:   GeneralPurposeRegister
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestGPR.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GeneralPurposeRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestGPR;

	// Inputs
	reg clk;
	reg enable;
	reg alu2in_enable;
	reg acc_enable;
	reg [2:0] mode;
	reg [2:0] src_addr;
	reg [2:0] dst_addr;
	reg [15:0] acc_input;

	// Outputs
	wire [15:0] alu_1st_in;
	wire [15:0] alu_2nd_in;

	// Bidirs
	wire [15:0] data;
	
	reg [15:0] data_in;

	// Instantiate the Unit Under Test (UUT)
	GeneralPurposeRegister uut (
		.clk(clk), 
		.enable(enable), 
		.alu2in_enable(alu2in_enable), 
		.acc_enable(acc_enable), 
		.mode(mode), 
		.src_addr(src_addr), 
		.dst_addr(dst_addr), 
		.acc_input(acc_input), 
		.alu_1st_in(alu_1st_in), 
		.alu_2nd_in(alu_2nd_in), 
		.data(data)
	);
	
	assign data = (enable === 1'b1 && mode === 3'b010) ? data_in : 16'hzzzz;

	initial begin
		// Initialize Inputs
		clk = 0;
		enable = 0;
		alu2in_enable = 1;
		acc_enable = 0;
		mode = 0;
		src_addr = 0;
		dst_addr = 0;
		acc_input = 0;
		data_in = 0;
		
		#20 enable = 1; data_in = 16'h1234; mode = 3'b010; dst_addr = 3'b011;
		#20 enable = 0; data_in = 16'h4321; dst_addr = 3'b001;
		#20 enable = 1; data_in = 16'h4321; dst_addr = 3'b000;
		#20 mode = 3'b001; src_addr = 3'b011;
		#20 src_addr = 3'b010;
		#20 src_addr = 3'b001;
		#20 src_addr = 3'b000;
		#20 mode = 3'b100; src_addr = 3'b000; dst_addr = 3'b001;
		#20 mode = 3'b001; src_addr = 3'b001;
		#20 mode = 3'b011; dst_addr = 3'b000;
		#20 mode = 3'b001; src_addr = 3'b000;
		#20 enable = 0; acc_enable = 1; acc_input = 16'hffff;
		#20 enable = 1; acc_enable = 0; mode = 3'b001; src_addr = 3'b000;
		#20 enable = 0;

	end
   initial begin
		forever #10 clk = ~clk;
	end
endmodule

