`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:37:45 04/19/2020
// Design Name:   TopModule
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestTopModule.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: TopModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestTopModule;

	// Inputs
	reg clk;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
	end
	initial begin
		forever #10 clk = ~clk;
	end 
endmodule

