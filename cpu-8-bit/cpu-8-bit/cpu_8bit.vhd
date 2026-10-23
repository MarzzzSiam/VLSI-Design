-- Mini 8-bit Accumulator CPU (top level) - Set 5: LDI, ADD, OR, NOT, SHR
-- Student ID: 22201055
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_8bit is
    port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;
        Q     : out STD_LOGIC_VECTOR(7 downto 0);  -- ACC output
        Z     : out STD_LOGIC;                     -- Zero flag
        PC    : out STD_LOGIC_VECTOR(3 downto 0)   -- Program counter (for checking)
    );
end cpu_8bit;

architecture structural of cpu_8bit is
    signal pc_s      : STD_LOGIC_VECTOR(3 downto 0);
    signal instr_s   : STD_LOGIC_VECTOR(11 downto 0);
    signal opcode_s  : STD_LOGIC_VECTOR(3 downto 0);
    signal operand_s : STD_LOGIC_VECTOR(7 downto 0);
    signal alu_op_s  : STD_LOGIC_VECTOR(2 downto 0);
    signal acc_we_s  : STD_LOGIC;
    signal z_we_s    : STD_LOGIC;
    signal acc_s     : STD_LOGIC_VECTOR(7 downto 0);
    signal alu_res_s : STD_LOGIC_VECTOR(7 downto 0);
    signal z_s       : STD_LOGIC;
begin
    opcode_s  <= instr_s(11 downto 8);
    operand_s <= instr_s(7 downto 0);

    U_PC : entity work.pc_reg
        port map (clk => CLK, reset => RESET, pc_out => pc_s);

    U_ROM : entity work.program_rom_set5
        port map (pc_addr => pc_s, instr => instr_s);

    U_CTRL : entity work.control_unit
        port map (opcode => opcode_s, alu_op => alu_op_s, acc_we => acc_we_s, z_we => z_we_s);

    U_ALU : entity work.alu_cpu
        port map (acc_in => acc_s, operand => operand_s, alu_op => alu_op_s, result => alu_res_s);

    U_ACCZ : entity work.acc_z_reg
        port map (clk => CLK, reset => RESET, acc_we => acc_we_s, z_we => z_we_s,
                  data_in => alu_res_s, acc_out => acc_s, z_out => z_s);

    Q  <= acc_s;
    Z  <= z_s;
    PC <= pc_s;
end structural;