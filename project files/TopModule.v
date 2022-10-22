`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:48:31 04/13/2020 
// Design Name: 
// Module Name:    TopModule 
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
module TopModule (clk);

// Top Module assembles all parts of processor together

parameter word_size = 16;
parameter high_impedance = 16'hzzzz;

/* Inputs */
// Clock regualtes working of all modules
input clk;

/* Main Buses */
// Buses responsible for primary data/address operations
wire [word_size-1 : 0] address_bus, data_bus, instruction_address, instruction_set;

/* Program Counter Wires */ 
wire [word_size-1 : 0] PC_jump_address;

reg PC_count_enable, PC_reset, PC_load_address, PC_jump_enable;

/* Memory Wires */
wire Memory_enable, Memory_write_enable;
wire [word_size-1 : 0] machine_code;

/* Instruction Register Wires */
reg IR_write_enable, IR_reset;
wire [word_size-1 : 0] pre_data;

/* ALU Wires */
wire carry, sign, zero, parity, equal, greater_than, ALU_reset, ALU_enable, ALU_mode;
wire [3 : 0] ALU_function;
wire [word_size-1 : 0] alu_1st_in, alu_R1_in;
wor [word_size-1 : 0] alu_2nd_in;

assign alu_2nd_in = alu_R1_in;
assign alu_2nd_in = data_bus; 

/* GPR Wires */
wire GPR_enable, GPR_alu2in_enable, GPR_acc_enable;
wire [2 : 0] GPR_mode, GPR_src_addr, GPR_dst_addr;
wire [word_size-1 : 0] GPR_acc_input;

/* Flag Register Wires */
wire FR_reset, parity_flag, equal_flag, greater_than_flag, sign_flag, zero_flag, carry_flag;

initial begin
	PC_reset = 1'b0;
	PC_jump_enable = 1'b0;
	PC_count_enable = 1'b1;
	PC_load_address = 1'b1;
	IR_write_enable = 1'b1;
end

/* Instantiation of modules */

ProgramCounter PC (.clk (clk), 
                   .count_enable (PC_count_enable), 
						 .reset (PC_reset), 
						 .load_address (PC_load_address), 
						 .jump_enable (PC_jump_enable), 
						 .jump_address (PC_jump_address), 
						 .address (instruction_address)
						 );
						 
Memory ProgramMemory (.clk (clk), 
                      .enable (1'b1), 
							 .write_enable (1'b0), 
							 .address (instruction_address), 
							 .data (machine_code)
							 );
							 
Memory DataMemory (.clk (clk), 
                   .enable (Memory_enable), 
					    .write_enable (Memory_write_enable), 
						 .address (address_bus), 
						 .data (data_bus)
						 );
	 
InstructionRegister IR (.clk (clk), 
                        .write_enable (IR_write_enable), 
								.reset (IR_reset), 
								.data_in (machine_code), 
								.data_out (instruction_set), 
								.pre_data_out (pre_data)
								);
								
ArithmeticLogicUnit ALU(.clk (clk), 
                        .enable (ALU_enable), 
								.reset (ALU_reset), 
								.in1 (alu_1st_in), 
								.in2 (alu_2nd_in), 
								.carry_in (carry_flag), 
								.mode (ALU_mode), 
								.func (ALU_function), 
                        .result (GPR_acc_input), 
								.carry_out (carry), 
								.sign (sign), 
								.zero (zero), 
								.parity (parity), 
								.equal (equal), 
								.greater_than (greater_than)
								); 
								
GeneralPurposeRegister GPR (.clk (clk), 
                            .enable (GPR_enable), 
									 .alu2in_enable (GPR_alu2in_enable), 
									 .acc_enable (GPR_acc_enable), 
									 .mode (GPR_mode), 
									 .src_addr (GPR_src_addr), 
									 .dst_addr (GPR_dst_addr), 
									 .acc_input (GPR_acc_input), 
									 .alu_1st_in (alu_1st_in), 
									 .alu_2nd_in (alu_R1_in), 
									 .data (data_bus)
									 );
								
FlagRegister FR (.clk (clk), 
                 .reset (FR_reset), 
					  .in ({parity, equal, greater_than, sign, zero, carry}), 
					  .out ({parity_flag, equal_flag, greater_than_flag, sign_flag, zero_flag, carry_flag})
					  );
					  
Decoder dec (.clk (clk), 
             .instruction (instruction_set), 
				 .pre_data (pre_data), 
				 .data (data_bus), 
				 .address (address_bus), 
				 .src_addr (GPR_src_addr), 
				 .dst_addr (GPR_dst_addr), 
				 .reg_enable (GPR_enable), 
				 .reg_mode (GPR_mode), 
				 .memory_enable (Memory_enable), 
				 .memory_write_enable (Memory_write_enable), 
				 .alu_enable (ALU_enable), 
				 .alu_reset (ALU_reset), 
				 .alu_mode (ALU_mode), 
				 .alu_function (ALU_function), 
				 .alu2in_enable (GPR_alu2in_enable), 
				 .gpr_acc_enable (GPR_acc_enable), 
				 .ir_reset (IR_reset), 
				 .pc_reset(PC_reset)
				 );

endmodule
