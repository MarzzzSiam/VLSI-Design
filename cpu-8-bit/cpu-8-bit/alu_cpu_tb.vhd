library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_cpu_tb is
end alu_cpu_tb;

architecture sim of alu_cpu_tb is

    component alu_cpu
        port (
            acc_in  : in  STD_LOGIC_VECTOR(7 downto 0);
            operand : in  STD_LOGIC_VECTOR(7 downto 0);
            alu_op  : in  STD_LOGIC_VECTOR(2 downto 0);
            result  : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal acc_in  : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal operand : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal alu_op  : STD_LOGIC_VECTOR(2 downto 0) := "000";
    signal result  : STD_LOGIC_VECTOR(7 downto 0);

begin

    uut : alu_cpu
        port map (acc_in => acc_in, operand => operand,
                  alu_op => alu_op, result => result);

    process
    begin
        -- PASS (LDI): result = operand
        alu_op <= "000"; acc_in <= x"55"; operand <= x"0F";
        wait for 10 ns;
        assert result = x"0F" report "PASS test 1 failed" severity error;

        alu_op <= "000"; acc_in <= x"FF"; operand <= x"00";
        wait for 10 ns;
        assert result = x"00" report "PASS test 2 failed" severity error;

        -- ADD: result = acc_in + operand (carry discarded)
        alu_op <= "001"; acc_in <= x"0F"; operand <= x"01";
        wait for 10 ns;
        assert result = x"10" report "ADD test 1 failed" severity error;

        alu_op <= "001"; acc_in <= x"28"; operand <= x"D8";
        wait for 10 ns;
        assert result = x"00" report "ADD test 2 failed" severity error;

        alu_op <= "001"; acc_in <= x"FF"; operand <= x"01";
        wait for 10 ns;
        assert result = x"00" report "ADD test 3 (overflow) failed" severity error;

        alu_op <= "001"; acc_in <= x"3C"; operand <= x"0F";
        wait for 10 ns;
        assert result = x"4B" report "ADD test 4 failed" severity error;

        -- OR: result = acc_in or operand
        alu_op <= "010"; acc_in <= x"0F"; operand <= x"A0";
        wait for 10 ns;
        assert result = x"AF" report "OR test 1 failed" severity error;

        alu_op <= "010"; acc_in <= x"00"; operand <= x"81";
        wait for 10 ns;
        assert result = x"81" report "OR test 2 failed" severity error;

        alu_op <= "010"; acc_in <= x"F0"; operand <= x"0F";
        wait for 10 ns;
        assert result = x"FF" report "OR test 3 failed" severity error;

        -- NOT: result = not acc_in (operand ignored)
        alu_op <= "011"; acc_in <= x"AF"; operand <= x"00";
        wait for 10 ns;
        assert result = x"50" report "NOT test 1 failed" severity error;

        alu_op <= "011"; acc_in <= x"00"; operand <= x"FF";
        wait for 10 ns;
        assert result = x"FF" report "NOT test 2 failed" severity error;

        -- SHR: result = acc_in >> 1, 0 into MSB (operand ignored)
        alu_op <= "100"; acc_in <= x"50"; operand <= x"00";
        wait for 10 ns;
        assert result = x"28" report "SHR test 1 failed" severity error;

        alu_op <= "100"; acc_in <= x"81"; operand <= x"FF";
        wait for 10 ns;
        assert result = x"40" report "SHR test 2 failed" severity error;

        alu_op <= "100"; acc_in <= x"01"; operand <= x"00";
        wait for 10 ns;
        assert result = x"00" report "SHR test 3 failed" severity error;

        -- Unused op code: result = acc_in (safe default)
        alu_op <= "101"; acc_in <= x"A5"; operand <= x"5A";
        wait for 10 ns;
        assert result = x"A5" report "Default op test failed" severity error;

        report "alu_cpu testbench finished - all tests passed" severity note;
        wait;
    end process;

end sim;