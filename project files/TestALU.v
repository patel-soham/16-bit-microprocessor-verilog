`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:43:47 04/19/2020
// Design Name:   ArithmeticLogicUnit
// Module Name:   D:/Final_Year_Project/EC_448_Major_Project/TestALU.v
// Project Name:  EC_448_Major_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ArithmeticLogicUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestALU;

	// Inputs
	reg clk;
	reg enable;
	reg reset;
	reg [15:0] in1;
	reg [15:0] in2;
	reg carry_in;
	reg mode;
	reg [3:0] func;

	// Outputs
	wire [15:0] result;
	wire carry_out;
	wire sign;
	wire zero;
	wire parity;
	wire equal;
	wire greater_than;
	
	integer i;

	// Instantiate the Unit Under Test (UUT)
	ArithmeticLogicUnit uut (
		.clk(clk), 
		.enable(enable), 
		.reset(reset), 
		.in1(in1), 
		.in2(in2), 
		.carry_in(carry_in), 
		.mode(mode), 
		.func(func), 
		.result(result), 
		.carry_out(carry_out), 
		.sign(sign), 
		.zero(zero), 
		.parity(parity), 
		.equal(equal), 
		.greater_than(greater_than)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		enable = 1;
		reset = 0;
		in1 = 0;
		in2 = 0;
		carry_in = 0;
		mode = 0;
		func = 0;
		i = 0;
		
		// Arithmatic functions test
		mode = 1;
		
	   in1 = 16'h0007; in2 = 16'h0006; func = 4'h0; // addition
		#20 in1 = 16'b1000_0000_0000_1001;  in2 = 16'h0009; // -9 + 9
		#20 in1 = 16'b1000_0000_0000_0010; in2 = 16'b1000_0000_0000_0011; // -2 + (-3)
		
		#20 in1 = 16'h0004; in2 = 16'h0007; func = 4'h1; // substraction
		#20 in1 = 16'h0007; in2 = 16'h0004; 
		#20 in1 = 16'h0004; in2 = 16'b1000_0000_0000_0100; // 4 - (-4)
		
		#20 in1 = 16'h0009; func = 4'h2; // increment
		#20 func = 4'h3; // decrement

		#20 func = 4'hf; // a as output
		#20 func = 4'he; // b as output
		
		#20 reset = 1;
		#20 reset = 0;
		
		// Logical functions test
		#100
		mode = 0;
		func = 0;
		in1 = 16'b1010_1011_0111_0000; in2 = 16'b1111_0000_1000_0110;
		for (i = 0; i < 8; i = i + 1) begin
			 #20 func = func + 1;
		end
		
		#20 func = 4'hf;
		#20 func = 4'he;
		#20 func = 4'hd;
		#20 func = 4'hc;
		#20 func = 4'hb;
		#20 func = 4'ha;
		
		#20 reset = 1;

	end
   initial begin
		forever #10 clk = ~clk;
	end
endmodule

