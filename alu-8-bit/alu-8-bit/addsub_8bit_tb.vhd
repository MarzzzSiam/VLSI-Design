-- Testbench for addsub_8bit
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity addsub_8bit_tb is
end addsub_8bit_tb;

architecture sim of addsub_8bit_tb is
    signal a, b, sum : std_logic_vector(7 downto 0) := (others => '0');
    signal cin, sub, cout : std_logic := '0';
begin
    uut : entity work.addsub_8bit
        port map (a => a, b => b, cin => cin, sub => sub, sum => sum, cout => cout);

    stim : process
    begin
        -- ADD: 25 + 10 = 35
        a <= x"19"; b <= x"0A"; cin <= '0'; sub <= '0'; wait for 20 ns;
        assert sum = x"23" report "ADD 25+10 failed" severity error;

        -- ADD with carry-in: 1 + 1 + 1 = 3
        a <= x"01"; b <= x"01"; cin <= '1'; sub <= '0'; wait for 20 ns;
        assert sum = x"03" report "ADD with Cin failed" severity error;

        -- ADD overflow: 255 + 1 = 0, Cout = 1
        a <= x"FF"; b <= x"01"; cin <= '0'; sub <= '0'; wait for 20 ns;
        assert sum = x"00" and cout = '1' report "ADD overflow failed" severity error;

        -- SUB: 20 - 5 = 15
        a <= x"14"; b <= x"05"; cin <= '0'; sub <= '1'; wait for 20 ns;
        assert sum = x"0F" report "SUB 20-5 failed" severity error;

        -- SUB: 5 - 5 = 0
        a <= x"05"; b <= x"05"; cin <= '0'; sub <= '1'; wait for 20 ns;
        assert sum = x"00" report "SUB 5-5 failed" severity error;

        -- SUB with negative result: 15 - 25 = -10 (0xF6 in 8 bits)
        a <= x"0F"; b <= x"19"; cin <= '0'; sub <= '1'; wait for 20 ns;
        assert sum = x"F6" report "SUB 15-25 failed" severity error;

        report "addsub_8bit testbench finished" severity note;
        wait;
    end process;
end sim;