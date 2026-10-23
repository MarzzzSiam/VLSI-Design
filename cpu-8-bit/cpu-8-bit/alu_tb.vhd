-- Testbench for the 8-bit ALU
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_tb is
end alu_tb;

architecture sim of alu_tb is
    signal A, B, Res : std_logic_vector(7 downto 0) := (others => '0');
    signal Op        : std_logic_vector(2 downto 0) := "000";
    signal Cin, Cout, Zero : std_logic := '0';
begin
    uut : entity work.alu_8bit
        port map (A => A, B => B, Cin => Cin, Op => Op,
                  Result => Res, Cout => Cout, Zero => Zero);

    stim : process
    begin
        -- ADD: 25 + 10 = 35
        A <= x"19"; B <= x"0A"; Cin <= '0'; Op <= "000"; wait for 20 ns;
        assert Res = x"23" report "ADD 25+10 failed" severity error;

        -- ADD with carry-in: 1 + 1 + 1 = 3
        A <= x"01"; B <= x"01"; Cin <= '1'; Op <= "000"; wait for 20 ns;
        assert Res = x"03" report "ADD with Cin failed" severity error;

        -- ADD overflow: 255 + 1 = 0, Cout = 1, Zero = 1
        A <= x"FF"; B <= x"01"; Cin <= '0'; Op <= "000"; wait for 20 ns;
        assert Res = x"00" and Cout = '1' and Zero = '1'
            report "ADD 255+1 failed" severity error;

        -- SUB: 20 - 5 = 15
        A <= x"14"; B <= x"05"; Cin <= '0'; Op <= "001"; wait for 20 ns;
        assert Res = x"0F" report "SUB 20-5 failed" severity error;

        -- SUB: 5 - 5 = 0, Zero = 1
        A <= x"05"; B <= x"05"; Cin <= '0'; Op <= "001"; wait for 20 ns;
        assert Res = x"00" and Zero = '1'
            report "SUB 5-5 failed" severity error;

        -- AND
        A <= x"AA"; B <= x"F0"; Cin <= '0'; Op <= "010"; wait for 20 ns;
        assert Res = x"A0" and Cout = '0' report "AND failed" severity error;

        -- OR
        Op <= "011"; wait for 20 ns;
        assert Res = x"FA" report "OR failed" severity error;

        -- XOR
        Op <= "100"; wait for 20 ns;
        assert Res = x"5A" report "XOR failed" severity error;

        -- NOT (of A)
        Op <= "101"; wait for 20 ns;
        assert Res = x"55" report "NOT failed" severity error;

        -- Unused code
        Op <= "110"; wait for 20 ns;
        assert Res = x"00" and Zero = '1' report "Unused op failed" severity error;

        report "ALU testbench finished" severity note;
        wait;
    end process;
end sim;