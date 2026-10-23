-- Testbench for cpu_8bit - runs the Set 5 program and checks against
-- the Appendix B expected results table (Student ID 22201055, Set 5)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity cpu_8bit_tb is
end cpu_8bit_tb;

architecture sim of cpu_8bit_tb is
    signal clk   : STD_LOGIC := '0';
    signal reset : STD_LOGIC := '1';
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);
    signal Z     : STD_LOGIC;
    signal PC    : STD_LOGIC_VECTOR(3 downto 0);
begin
    uut : entity work.cpu_8bit
        port map (CLK => clk, RESET => reset, Q => Q, Z => Z, PC => PC);

    clk_gen : process
    begin
        clk <= '0'; wait for 5 ns;
        clk <= '1'; wait for 5 ns;
    end process;

    stim : process
    begin
        -- Cycle 0: RESET = 1 at the rising edge
        reset <= '1';
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"00" and Z = '1' and PC = "0000"
            report "Cycle 0 (RESET) failed" severity error;
        reset <= '0';

        -- Cycle 1: PC=0, LDI 0x0F -> ACC=0x0F, Z=0, next PC=1
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"0F" and Z = '0' and PC = "0001"
            report "Cycle 1 (LDI 0x0F) failed" severity error;

        -- Cycle 2: PC=1, OR 0xA0 -> ACC=0xAF, Z=0, next PC=2
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"AF" and Z = '0' and PC = "0010"
            report "Cycle 2 (OR 0xA0) failed" severity error;

        -- Cycle 3: PC=2, NOT -> ACC=0x50, Z=0, next PC=3
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"50" and Z = '0' and PC = "0011"
            report "Cycle 3 (NOT) failed" severity error;

        -- Cycle 4: PC=3, SHR -> ACC=0x28, Z=0, next PC=4
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"28" and Z = '0' and PC = "0100"
            report "Cycle 4 (SHR) failed" severity error;

        -- Cycle 5: PC=4, ADD 0xD8 -> ACC=0x00, Z=1, next PC=5
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"00" and Z = '1' and PC = "0101"
            report "Cycle 5 (ADD 0xD8) failed" severity error;

        -- Cycle 6: PC=5, OR 0x81 -> ACC=0x81, Z=0, next PC=6
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"81" and Z = '0' and PC = "0110"
            report "Cycle 6 (OR 0x81) failed" severity error;

        -- Cycle 7: PC=6, SHR -> ACC=0x40, Z=0, next PC=7
        wait until rising_edge(clk);
        wait for 1 ns;
        assert Q = x"40" and Z = '0' and PC = "0111"
            report "Cycle 7 (SHR) failed" severity error;

        report "cpu_8bit testbench finished - Set 5 program passed all cycles" severity note;
        wait;
    end process;
end sim;