library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity clkdiv is
	Port( mclk : in STD_LOGIC;
			clr : in STD_LOGIC;
			clk190 : out STD_LOGIC;
			clk3 : out STD_LOGIC);
end clkdiv;

architecture Behavioral of clkdiv is
	signal q:std_logic_vector(23 downto 0);
	begin
	
-- clock devider
		process(mclk, clr,q)
		begin
			if clr ='1' then
				q <= (others => '0');
			elsif mclk'event and mclk ='1' then
					q <= q + 1;
			end if;
			clk3 <= q(18);
			clk190 <= q(17);
		end process;
		
end Behavioral;