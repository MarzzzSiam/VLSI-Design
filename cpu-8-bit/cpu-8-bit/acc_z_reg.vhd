-- 8-bit Accumulator (ACC) + 1-bit Zero flag (Z) register
-- Synchronous, active-high RESET: ACC <= 0x00, Z <= 1
-- On a normal cycle: ACC updates when acc_we = 1, Z updates when z_we = 1
--   (Z becomes 1 exactly when the newly written ACC value is 0x00)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity acc_z_reg is
    port (
        clk     : in  STD_LOGIC;
        reset   : in  STD_LOGIC;
        acc_we  : in  STD_LOGIC;
        z_we    : in  STD_LOGIC;
        data_in : in  STD_LOGIC_VECTOR(7 downto 0);
        acc_out : out STD_LOGIC_VECTOR(7 downto 0);
        z_out   : out STD_LOGIC
    );
end acc_z_reg;

architecture behavioral of acc_z_reg is
    signal acc_i : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal z_i   : STD_LOGIC := '1';
begin
    process (clk)
    begin
        if rising_edge(clk) then
            if reset = '1' then
                acc_i <= (others => '0');
                z_i   <= '1';
            else
                if acc_we = '1' then
                    acc_i <= data_in;
                end if;
                if z_we = '1' then
                    if data_in = "00000000" then
                        z_i <= '1';
                    else
                        z_i <= '0';
                    end if;
                end if;
            end if;
        end if;
    end process;

    acc_out <= acc_i;
    z_out   <= z_i;
end behavioral;