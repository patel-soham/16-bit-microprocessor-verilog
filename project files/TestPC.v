`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:46:17 04/18/2020
// Design Name:   ProgramCounter
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestPC.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestPC;

	// Inputs
	reg clk;
	reg count_enable;
	reg reset;
	reg load_address;
	reg jump_enable;
	reg [15:0] jump_address;

	// Outputs
	wire [15:0] address;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.clk(clk), 
		.count_enable(count_enable), 
		.reset(reset), 
		.load_address(load_address), 
		.jump_enable(jump_enable), 
		.jump_address(jump_address), 
		.address(address)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		count_enable = 0;
		reset = 0;
		load_address = 0;
		jump_enable = 0;
		jump_address = 0;

		// Wait 100 ns for global reset to finish
		#20 load_address = 1; count_enable = 1;
		#20 count_enable = 0;
		#20 count_enable = 1; jump_address = 16'haa98;
		#20 jump_enable = 1; 
		#20 jump_enable = 0;  
		#20 reset = 1; 
		#20 reset = 0;
		#20 count_enable = 0; 
		#20 load_address = 0;
        
		// Add stimulus here

	end
	initial begin
		forever #10 clk = ~clk;
	end
endmodule

