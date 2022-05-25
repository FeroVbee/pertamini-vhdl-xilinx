library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity percobaan is
		port ( puluhan, satuan: in STD_LOGIC;
				 clr : in STD_LOGIC;
				 clk : in STD_LOGIC;
				 start : in STD_LOGIC;
				 digit : out STD_LOGIC_VECTOR(13 downto 0);
				 led1: out STD_LOGIC);
end percobaan;

architecture Behavioral of percobaan is

type state_type is (s0,s1,s2);
signal state : state_type;

signal maxsel,count : STD_LOGIC_VECTOR(13 downto 0);
signal lastbtn: STD_LOGIC;

signal led : STD_LOGIC;

begin
		process (clr,clk,state,maxsel,lastbtn,led)
		begin

			if clr='1' then
				state <= s0;
				maxsel<=(others=>'0'); count<=(others=>'0');
				led<='0'; led1<=led;
			elsif clk'event and clk='1' then
				case state is
					when s0 =>
								if satuan='1' and lastbtn='0' then maxsel<=maxsel+1; digit<=maxsel; 
									elsif puluhan='1' and lastbtn='0' then maxsel<=maxsel+10; digit <=maxsel; 
									elsif start='1' and lastbtn='0' then  digit<=maxsel; state<=s1;
									elsif conv_integer(maxsel)>9999 then maxsel <=(others=>'0');
									else  state<=s0;
								end if;
								lastbtn <= puluhan or satuan or start;
								digit <= maxsel;
					
					when s1 =>
								if count >= maxsel then state<=s2;
									elsif conv_integer(count)=9999 then count <=(others=>'0');
									else count<=count+1;
								end if;
								digit<=count;
					when s2 =>
								led <= not led;
								
								state <= s2;
								led1<=led;
								digit<=count;
					when others => state <= s0;
				end case;		
			end if;
		end process;
end Behavioral;

