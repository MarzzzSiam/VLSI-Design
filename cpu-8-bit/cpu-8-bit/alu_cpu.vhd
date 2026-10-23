-- 8-bit combinational ALU for the accumulator CPU (Set 5: LDI, ADD, OR, NOT, SHR)
-- Reuses existing blocks from earlier experiments:
--   adder_8bit      (Experiment 2 - structural ripple-carry adder, used for ADD)
--   logic_unit_8bit (Experiment 4 - bitwise AND/OR/XOR/NOT, used for OR and NOT)
-- SHR and the LDI pass-through are simple concurrent assignments, since no
-- reusable 8-bit shifter was built in earlier experiments.
--
-- alu_op encoding:
--   000 = PASS   (result = operand)          -> used for LDI
--   001 = ADD    (result = acc_in + operand)  -> used for ADD
--   010 = OR     (result = acc_in or operand) -> used for OR
--   011 = NOT    (result = not acc_in)        -> used for NOT
--   100 = SHR    (result = acc_in shifted right by 1, 0 into MSB) -> used for SHR
--   others       (result = acc_in, unused / safety default)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_cpu is
    port (
        acc_in  : in  STD_LOGIC_VECTOR(7 downto 0);
        operand : in  STD_LOGIC_VECTOR(7 downto 0);
        alu_op  : in  STD_LOGIC_VECTOR(2 downto 0);
        result  : out STD_LOGIC_VECTOR(7 downto 0)
    );
end alu_cpu;

architecture structural of alu_cpu is

    component adder_8bit
        Port ( A    : in  STD_LOGIC_VECTOR (7 downto 0);
               B    : in  STD_LOGIC_VECTOR (7 downto 0);
               CIN  : in  STD_LOGIC;
               SUM  : out STD_LOGIC_VECTOR (7 downto 0);
               COUT : out STD_LOGIC);
    end component;

    component logic_unit_8bit
        port (
            a, b  : in  std_logic_vector(7 downto 0);
            and_r : out std_logic_vector(7 downto 0);
            or_r  : out std_logic_vector(7 downto 0);
            xor_r : out std_logic_vector(7 downto 0);
            not_r : out std_logic_vector(7 downto 0)
        );
    end component;

    signal add_sum      : STD_LOGIC_VECTOR(7 downto 0);
    signal add_cout     : STD_LOGIC;
    signal and_result   : STD_LOGIC_VECTOR(7 downto 0);
    signal or_result    : STD_LOGIC_VECTOR(7 downto 0);
    signal xor_result   : STD_LOGIC_VECTOR(7 downto 0);
    signal not_result   : STD_LOGIC_VECTOR(7 downto 0);
    signal shr_result   : STD_LOGIC_VECTOR(7 downto 0);

begin

    -- ADD: reused from Experiment 2 (carry-out is not needed; ADD discards carry)
    U_ADD : adder_8bit
        port map (A => acc_in, B => operand, CIN => '0', SUM => add_sum, COUT => add_cout);

    -- OR / NOT (and AND / XOR, unused here): reused from the Experiment 4 logic unit
    U_LOGIC : logic_unit_8bit
        port map (a => acc_in, b => operand,
                  and_r => and_result, or_r => or_result,
                  xor_r => xor_result, not_r => not_result);

    -- SHR: new, since no 8-bit shifter exists from earlier experiments
    shr_result <= '0' & acc_in(7 downto 1);

    process (alu_op, operand, add_sum, or_result, not_result, shr_result, acc_in)
    begin
        case alu_op is
            when "000" => result <= operand;      -- PASS (LDI)
            when "001" => result <= add_sum;       -- ADD
            when "010" => result <= or_result;     -- OR
            when "011" => result <= not_result;    -- NOT
            when "100" => result <= shr_result;    -- SHR
            when others => result <= acc_in;
        end case;
    end process;

end structural;