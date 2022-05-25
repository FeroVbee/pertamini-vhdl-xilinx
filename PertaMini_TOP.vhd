library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PertaMini_TOP is
	port ( Mclock,Clr,Start : in STD_LOGIC;
			 BTN 		 : in STD_LOGIC_VECTOR(1 downto 0);
			 A_to_G 	 : out STD_LOGIC_VECTOR(6 downto 0);
			 AN 		 : out STD_LOGIC_VECTOR(3 downto 0);
			 Dotp,LED : out STD_LOGIC);
end PertaMini_TOP;

architecture Behavioral of PertaMini_TOP is

	component clkdiv is
			Port( mclk,clr : in STD_LOGIC;
					clk190,clk3 : out STD_LOGIC);
	end component;
	
	component percobaan is
			port( button : in STD_LOGIC_VECTOR(1 downto 0);
				   clr,clk,start : in STD_LOGIC;
					digit : out STD_LOGIC_VECTOR(13 downto 0);
					led1: out STD_LOGIC);
	end component;
	
	component binBCD14 is
			Port( b : in STD_LOGIC_VECTOR (13 downto 0);
					p : out STD_LOGIC_VECTOR (15 downto 0));
	end component;
	
	component x7segbc is
			port( x : in std_logic_vector (15 downto 0);
					cclk,clr : in std_logic;
					a_to_g : out std_logic_vector(6 downto 0);
					an : out std_logic_vector (3 downto 0);
					dp : out std_logic);
	end component;
	
	SIGNAL c3, c190 : STD_LOGIC;
	SIGNAL O : STD_LOGIC_VECTOR(13 downto 0);
	SIGNAL R : STD_LOGIC_VECTOR(15 downto 0);

begin

	Q1 : clkdiv 	port map (mclk=>Mclock, clr=>Clr, clk190=>c190, clk3=>c3);
	Q2 : percobaan port map (button=>BTN, clr=>Clr, clk=>c3, start=>Start, digit=>O, led1=>LED);
	Q3 : binBCD14  port map (b=>O, p=>R);
	Q4 : x7segbc   port map (x=>R, cclk=>c190, clr=>Clr, a_to_g=>A_to_G, an=>AN, dp=>Dotp);

end Behavioral;

