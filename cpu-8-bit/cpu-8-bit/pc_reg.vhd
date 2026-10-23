-- 4-bit Program Counter
-- Synchronous, active-high RESET. No JZ in Set 5, so PC always becomes PC+1.
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity pc_reg is
    port (
        clk   : in  STD_LOGIC;
        reset : in  STD_LOGIC;
        pc_out : out STD_LOGIC_VECTOR(3 downto 0)
    );
end pc_reg;

architecture behavioral of pc_reg is
    signal pc_i : unsigned(3 downto 0) := (others => '0');
begin
    process (clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                pc_i <= (others => '0');
            else
                pc_i <= pc_i + 1;
            end if;
        end if;
    end process;

    pc_out <= std_logic_vector(pc_i);
end behavioral;