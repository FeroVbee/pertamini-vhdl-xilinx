library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity PertaMini_TOP is
	port ( Mclock,Clr,Start : in STD_LOGIC;
			 Puluhan,Satuan   : in STD_LOGIC;
			 A_to_G 	 : out STD_LOGIC_VECTOR(6 downto 0);
			 AN 		 : out STD_LOGIC_VECTOR(3 downto 0);
			 Dotp,LED : out STD_LOGIC);
end PertaMini_TOP;

architecture Behavioral of PertaMini_TOP is

	component clkdiv is
			Port( mclk,clr : in STD_LOGIC;
					clk190,clk48 : out STD_LOGIC);
	end component;
	
	component percobaan is
			port ( puluhan, satuan: in STD_LOGIC;
					 clr : in STD_LOGIC;
					 clk : in STD_LOGIC;
					 start : in STD_LOGIC;
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
	
	SIGNAL c48, c190 : STD_LOGIC;
	SIGNAL O : STD_LOGIC_VECTOR(13 downto 0);
	SIGNAL R : STD_LOGIC_VECTOR(15 downto 0);

begin

	Q1 : clkdiv 	 port map (mclk=>Mclock, clr=>Clr, clk190=>c190, 
									  clk48=>c48);
										
	Q2 : percobaan port map (puluhan=>Puluhan, satuan=>Satuan, clr=>Clr, clk=>c48, 
									  start=>Start, digit=>O, led1=>LED); --diganti Mclock untuk simulasi
										
	Q3 : binBCD14   port map (b=>O, p=>R);
	
	Q4 : x7segbc    port map (x=>R, cclk=>c190, clr=>Clr, a_to_g=>A_to_G,
									  an=>AN, dp=>Dotp); --diganti Mclock untuk simulasi

end Behavioral;

