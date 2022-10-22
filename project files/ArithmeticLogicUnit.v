`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:26 04/13/2020 
// Design Name: 
// Module Name:    ArithmeticLogicUnit 
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
module ArithmeticLogicUnit (clk, enable, reset, in1, in2, carry_in, mode, func, 
                            result, carry_out, sign, zero, parity, equal, greater_than); 
									 
// 16 bit ALU ( 1 bit MSB reserved for signed bit) 
// Works on positive edge of clock
// Input signals are active high
// Uses Signed Magnitude format of data to process 

/* Inputs */
// clk regulates working of program counter
// enable to control working of alu
// reset to clear contents of alu
// in1 and in2 are two data inputs to alu
// carry_in is input from flag register
// mode to control alu (1 for Arithmetic and 0 for Logic operations)
// func to select operation to perform

/* Outputs */
// result is output of alu after operation
// carry_out to show carry signal of result
// sign to show if result is negative
// zero to show if result is zero (16'h0000)
// parity to show if there is even parity in result (EXCLUDING sign bit)
// equal to show if both inputs to alu are equal
// greater_than to show if the 1st input is greater than 2nd input

parameter word_size = 16;
parameter high_impedance = 16'hzzzz;

/* Arithmetic functions (Mode = 1) */
// All arithmatic functions are compatible with any combination
// of negative numbers as input 
parameter addition = 4'h0;     
parameter substraction = 4'h1;
parameter increment = 4'h2;     // increment of 1st input by 1
parameter decrement = 4'h3;     // decrement of ist input by 1

/* Logic functions (Mode = 0) */
parameter xor_op = 4'h0;
parameter and_op = 4'h1;
parameter or_op = 4'h2;
parameter xnor_op = 4'h3;
parameter nand_op = 4'h4;
parameter nor_op = 4'h5;

parameter high = 4'hf;          // all output lines are logic high
parameter low = 4'he;           // all output lines are logic low
parameter input1 = 4'hd;        // reflect 1st input as output
parameter input2 = 4'hc;        // reflect 2nd input as output 
parameter invert_in1 = 4'hb;    // invert 1st input as output 
parameter invert_in2 = 4'ha;    // invert 2nd input as output

input clk, enable, reset, carry_in, mode;
input [word_size-1 : 0] in1, in2; 
input [3 : 0] func;

output reg [word_size-1 : 0] result;
output reg carry_out, sign, zero, parity, equal, greater_than;

reg [word_size-1 : 0] temp_in1, temp_in2;
reg [word_size : 0] temp_result;

integer count;

// Initializing reg variables
initial begin
	result = 0;
	carry_out = 0;
	sign = 0;
	zero = 0;
	parity = 0;
	equal = 0;
	greater_than = 0;
	temp_in1 = 0;
	temp_in2 = 0;
	temp_result = 0;
	count = 0;
end

always @ (posedge clk) begin
	if(enable === 1'b1) begin   // only perform when enable is high 
		temp_in1 = in1;
		temp_in2 = in2;
		temp_result = 0;
		
		equal = ( temp_in1 === temp_in2 )? 1'b1 : 1'b0; 
		if (temp_in1[15] > temp_in2[15])
			greater_than = 1'b0;
		else if (temp_in1 > temp_in2)
			greater_than = 1'b1;
		else
			greater_than = 1'b0;
	
		if (mode === 1'b1) begin // Arithmetic operations
			case (func) 
				addition: begin
				   // both inputs are positive
					if ( {temp_in1[15] , temp_in2[15]} === 2'b00) begin 
						temp_result = adder (temp_in1, temp_in2, carry_in);
						if ( temp_result [15] === 1) begin
							temp_result [15] = 0;
							temp_result [16] = 1;
						end
					end
					else begin // any or both of input/s is/are negative 
					   // 1st input is negative
						if (temp_in1[15] === 1'b1)     
							temp_in1 = comp2 (temp_in1); // taking 2's complement 
						// 2nd input is negative
						if (temp_in2[15] === 1'b1) 				       
							temp_in2 = comp2 (temp_in2); // taking 2's complement 
						
						temp_result = adder (temp_in1, temp_in2, carry_in);
					   // result is negative
						if (temp_result[15] === 1'b1) begin           
							temp_result = comp2 (temp_result);
							if(temp_result[15] === 1'b0)
								temp_result[15] = 1;
							else
								temp_result[15] = 0;
						end
					end
				
					carry_out = temp_result[16];
				end
			
				substraction: begin
				   // both inputs are positive
					if ( {temp_in1[15] , temp_in2[15]} === 2'b00)       
						temp_in2 = comp2 (temp_in2);
					// 1st input is negative
					else if (temp_in1[15] === 1'b1) begin 	               
						temp_in1 = comp2 (temp_in1); // taking 2's complement 
						temp_in2 = comp2 (temp_in2);
					end
				   // 2nd input is negative
					else                                          
						temp_in2[15] = 0; // considering 2nd input as positive 
					
					temp_result = adder (temp_in1, temp_in2, carry_in);
				   // result is negative
					if (temp_result[15] === 1'b1) begin   
						temp_result = comp2 (temp_result);
						if(temp_result[15] === 1'b0)
							temp_result[15] = 1;
						else
							temp_result[15] = 0;
					end
				end
			
				increment: begin
					temp_result = adder (temp_in1, 16'h0001, 0);
				end
			
				decrement: begin
					temp_result = adder (temp_in1, comp2 (16'h0001), 0);
				end
				default: begin
					temp_result = 17'h0000;
				end
			endcase
		end
	
		else  begin 	// mode=0 for logical operation
			case (func)
				xor_op: begin 
					temp_result = temp_in1 ^ temp_in2;
				end
			
				and_op: begin
					temp_result = temp_in1 & temp_in2;
				end
			
				or_op: begin
					temp_result = temp_in1 | temp_in2;
				end
			
				xnor_op: begin
					temp_result = (temp_in1 ^ temp_in2);
					temp_result = invert (temp_result);
				end
			
				nand_op: begin
					temp_result = (temp_in1 & temp_in2);
					temp_result = invert (temp_result);
				end
			
				nor_op: begin
					temp_result = (temp_in1 | temp_in2);
					temp_result = invert (temp_result);
				end
			
				high: begin
					temp_result[15:0] = 16'hffff;
				end
			
				low: begin
					temp_result[15:0] = 16'h0000;
				end
			   
            input1: begin
					temp_result = temp_in1;
				end
			
				input2: begin
					temp_result = temp_in2;
				end
				
				invert_in1: begin
					temp_result = invert (temp_in1);
				end
			
				invert_in2: begin
					temp_result = invert (temp_in2);
				end
				
				default: begin
					temp_result = 17'h0000;
				end
			endcase
		end
	
		if (reset === 1'b1) begin
			temp_result = 0;
		end
		
		zero = ( temp_result [15 : 0] === 16'h0000 )? 1'b1 : 1'b0;
		parity = ~^temp_result [15 : 0]; 
		sign = temp_result [15];
		result = temp_result [15 : 0];
	end
end

function automatic [word_size-1 : 0] comp2;
	input [word_size-1 : 0] data_in;
	reg [word_size-1 : 0] temp;
	begin
		temp = invert (data_in);
		comp2 = adder (temp, 16'h0001, 0);
	end
endfunction	

function automatic [word_size-1 : 0] invert;
	input [word_size-1 : 0] in;
	begin
	invert = ~in;
	end
endfunction

function automatic [word_size : 0] adder;
	input [word_size-1 : 0] in1, in2;
	input cin;
	reg [word_size-1 : 0] p, g, c;
	integer i;
	begin
		p = in1 ^ in2;
		g = in1 & in2;
		c[0] = g[0] | (cin&p[0]);
		adder[0] = p[0] ^ cin;
		
		for (i=1; i<16; i=i+1) begin
			c[i] = g[i] | (c[i-1] & p[i]);
			adder[i] = p[i] ^ c[i-1];
		end
		
		adder[16] = c[15];
	end
endfunction
	
endmodule 
