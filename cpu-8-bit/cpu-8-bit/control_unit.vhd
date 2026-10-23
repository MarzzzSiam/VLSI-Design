-- Control Unit for the accumulator CPU (Set 5: LDI, ADD, OR, NOT, SHR)
-- Decodes opcode[3:0] = instr[11:8] into:
--   alu_op  : function select for the ALU
--   acc_we  : 1 when ACC should be updated this cycle
--   z_we    : 1 when the Z flag should be updated this cycle
-- Any opcode not in this set behaves as NOP (acc_we = 0, z_we = 0).
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    port (
        opcode : in  STD_LOGIC_VECTOR(3 downto 0);
        alu_op : out STD_LOGIC_VECTOR(2 downto 0);
        acc_we : out STD_LOGIC;
        z_we   : out STD_LOGIC
    );
end control_unit;

architecture dataflow of control_unit is
begin
    process (opcode)
    begin
        case opcode is
            when "0001" =>  -- LDI
                alu_op <= "000"; acc_we <= '1'; z_we <= '1';
            when "0010" =>  -- ADD
                alu_op <= "001"; acc_we <= '1'; z_we <= '1';
            when "0101" =>  -- OR
                alu_op <= "010"; acc_we <= '1'; z_we <= '1';
            when "0111" =>  -- NOT
                alu_op <= "011"; acc_we <= '1'; z_we <= '1';
            when "1001" =>  -- SHR
                alu_op <= "100"; acc_we <= '1'; z_we <= '1';
            when others =>  -- NOP (any opcode outside this set)
                alu_op <= "000"; acc_we <= '0'; z_we <= '0';
        end case;
    end process;
end dataflow;