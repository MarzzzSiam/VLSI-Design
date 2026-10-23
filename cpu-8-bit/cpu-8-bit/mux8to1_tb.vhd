-- Testbench for mux8to1
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux8to1_tb is
end mux8to1_tb;

architecture sim of mux8to1_tb is
    signal i0, i1, i2, i3, i4, i5, i6, i7 : std_logic := '0';
    signal sel : std_logic_vector(2 downto 0) := "000";
    signal y   : std_logic;
begin
    uut : entity work.mux8to1
        port map (i0 => i0, i1 => i1, i2 => i2, i3 => i3,
                   i4 => i4, i5 => i5, i6 => i6, i7 => i7,
                   sel => sel, y => y);

    stim : process
    begin
        -- give each input a distinct value so only one source can match y
        i0 <= '1'; i1 <= '0'; i2 <= '0'; i3 <= '1';
        i4 <= '0'; i5 <= '1'; i6 <= '1'; i7 <= '0';

        sel <= "000"; wait for 20 ns;
        assert y = i0 report "MUX sel=000 failed" severity error;

        sel <= "001"; wait for 20 ns;
        assert y = i1 report "MUX sel=001 failed" severity error;

        sel <= "010"; wait for 20 ns;
        assert y = i2 report "MUX sel=010 failed" severity error;

        sel <= "011"; wait for 20 ns;
        assert y = i3 report "MUX sel=011 failed" severity error;

        sel <= "100"; wait for 20 ns;
        assert y = i4 report "MUX sel=100 failed" severity error;

        sel <= "101"; wait for 20 ns;
        assert y = i5 report "MUX sel=101 failed" severity error;

        sel <= "110"; wait for 20 ns;
        assert y = i6 report "MUX sel=110 failed" severity error;

        sel <= "111"; wait for 20 ns;
        assert y = i7 report "MUX sel=111 failed" severity error;

        report "mux8to1 testbench finished" severity note;
        wait;
    end process;
end sim;