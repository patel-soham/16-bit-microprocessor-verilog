`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:59:47 04/19/2020
// Design Name:   Register
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestRegister.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Register
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestRegister;

	// Inputs
	reg clk;
	reg load;
	reg reset;
	reg [15:0] in;

	// Outputs
	wire [15:0] out;

	// Instantiate the Unit Under Test (UUT)
	Register uut (
		.clk(clk), 
		.load(load), 
		.reset(reset), 
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		load = 0;
		reset = 0;
		in = 0;

		// Wait 100 ns for global reset to finish
		#20 load = 1;
		#20 in = 16'haa11; 
		#20 reset = 1;
		#20 reset = 0; in = 16'h5555;
		#20 load = 0; in = 16'h0000;
        
		// Add stimulus here

	end
	initial begin
		forever #10 clk = ~clk;
	end
endmodule

