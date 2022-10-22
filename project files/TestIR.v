`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:08:22 04/19/2020
// Design Name:   InstructionRegister
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestIR.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionRegister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestIR;

	// Inputs
	reg clk;
	reg write_enable;
	reg reset;
	reg [15:0] data_in;

	// Outputs
	wire [15:0] data_out;
	wire [15:0] pre_data_out;

	// Instantiate the Unit Under Test (UUT)
	InstructionRegister uut (
		.clk(clk), 
		.write_enable(write_enable), 
		.reset(reset), 
		.data_in(data_in), 
		.data_out(data_out), 
		.pre_data_out(pre_data_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		write_enable = 0;
		reset = 0;
		data_in = 0;

		// Wait 100 ns for global reset to finish
		#20 write_enable = 1;
		#20 data_in = 16'haa11; 
		#20 write_enable = 0; data_in = 16'h5555;
		#20 write_enable = 1; data_in = 16'h9999;
		#80 reset = 1;
        
		// Add stimulus here

	end
   initial begin
		forever #10 clk = ~clk;
	end   
endmodule

