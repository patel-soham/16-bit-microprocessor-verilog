`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:17:50 04/18/2020
// Design Name:   Memory
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestMemory.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestMemory;

	// Inputs
	reg clk;
	reg enable;
	reg write_enable;
	reg [15:0] address;

	// Bidirs
	wire [15:0] data;
	
	// Regs
	reg [15:0] data_in;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	Memory uut (
		.clk(clk), 
		.enable(enable), 
		.write_enable(write_enable), 
		.address(address), 
		.data(data)
	);

	assign data = (enable === 1'b1 && write_enable === 1'b1) ? data_in : 16'hzzzz;

	initial begin
		// Initialize Inputs
		clk = 0;
		enable = 0;
		write_enable = 0;
		address = 0;
		i = 0;
		data_in = 16'hzzzz;

		// Wait 100 ns for global reset to finish
		#20 enable = 1; write_enable = 1;
		#20 address = 16'h2323; data_in = 16'hf0f0;
		#20 address = 16'h2324; data_in = 16'hffff; enable = 0;
		#20 address = 16'h2325; enable = 1;
		#20 address = 16'h2322; write_enable = 0; data_in = 16'hzzzz;
		#20 address = 16'h2323;
		#20 address = 16'h2324;
		#20 address = 16'h2325;
		#20 address = 16'h2325;
		#20 enable = 0;
		
        
		// Add stimulus here

	end
    initial begin
		forever #10 clk = ~clk;
	end
endmodule

