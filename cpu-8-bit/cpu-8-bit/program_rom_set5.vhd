-- Program ROM for Set 5: LDI, ADD, OR, NOT, SHR
-- 16 locations x 12 bits, read combinationally by pc_addr.
-- instr[11:8] = opcode, instr[7:0] = operand
--
-- 0: LDI 0x0F -> 0x10F
-- 1: OR  0xA0 -> 0x5A0
-- 2: NOT      -> 0x700
-- 3: SHR      -> 0x900
-- 4: ADD 0xD8 -> 0x2D8
-- 5: OR  0x81 -> 0x581
-- 6: SHR      -> 0x900
-- 7-15: unused -> 0x000 (NOP)
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity program_rom_set5 is
    port (
        pc_addr : in  STD_LOGIC_VECTOR(3 downto 0);
        instr   : out STD_LOGIC_VECTOR(11 downto 0)
    );
end program_rom_set5;

architecture dataflow of program_rom_set5 is
    type rom_array is array (0 to 15) of STD_LOGIC_VECTOR(11 downto 0);
    constant ROM : rom_array := (
        0  => x"10F",  -- LDI 0x0F
        1  => x"5A0",  -- OR  0xA0
        2  => x"700",  -- NOT
        3  => x"900",  -- SHR
        4  => x"2D8",  -- ADD 0xD8
        5  => x"581",  -- OR  0x81
        6  => x"900",  -- SHR
        7  => x"000",
        8  => x"000",
        9  => x"000",
        10 => x"000",
        11 => x"000",
        12 => x"000",
        13 => x"000",
        14 => x"000",
        15 => x"000"
    );
begin
    instr <= ROM(to_integer(unsigned(pc_addr)));
end dataflow;