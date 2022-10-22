`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:39:44 04/13/2020 
// Design Name: 
// Module Name:    Memory 
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
module Memory (clk, enable, write_enable, address, data);

// 65536 * 16 = 64k * 16 bits Memory
// Works on rising edge of clock
// Every input signal is active high 

/* Inputs */
// clk regulates working of memory
// enable signal to control working of memory
// write_enable to decide reading or writing operation 
// address provides location number to read/write data  

/* Inout Port */
// data Bus to read/write data from/to memory

parameter word_size = 16;	           // n Bits				
parameter memory_locations = 65536;    // 2^n Locations 
parameter high_impedance = 16'hzzzz;	
parameter zero = 16'h0000;

input	clk, enable, write_enable;       
input [word_size-1 : 0] address;

inout [word_size-1 : 0] data;

reg [word_size-1 : 0] MEMORY [memory_locations-1 : 0];  // 2^n * n bits memory initialize
reg [word_size-1 : 0] data_out;
integer i;

// Initialize memory to zero
// Replace data instead of zeros as provided in text file
// Generate MEMORY variable with 2 bytes long 64k locations 
initial begin
	for (i = 0; i < memory_locations; i = i + 1) 
		MEMORY [i] = zero;
	$readmemh ("code.txt", MEMORY);
	data_out = zero;
	i = 0;
end

// data bus is high impedance for low enable and/or high write_enable (write mode)
assign data = (enable === 1'b1 && write_enable === 1'b0) ? data_out : high_impedance;

always @ (posedge clk) begin
	case ({write_enable, enable})
		2'b00 : begin
			data_out = high_impedance;
		end
		2'b01 : begin                     // Read Mode
			if (address !== high_impedance)
				data_out = MEMORY [address]; 
			else
				data_out = high_impedance;
			$display ($time, "data_out = %h mem[addr] = %h addr = %h ",data_out, MEMORY[address], address);
		end
		2'b10 : begin
			data_out = high_impedance;
		end
		2'b11 : begin                    // Write Mode
			MEMORY [address] = data;
			$display ($time, "data_in = %h mem[addr] = %h addr = %h ",data, MEMORY[address], address);
		end
	endcase
end

endmodule 
