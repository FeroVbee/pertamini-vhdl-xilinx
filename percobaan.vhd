library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity percobaan is
		port ( button : in STD_LOGIC_VECTOR(1 downto 0);
				 clr : in STD_LOGIC;
				 clk : in STD_LOGIC;
				 start : in STD_LOGIC;
				 digit : out STD_LOGIC_VECTOR(13 downto 0);
				 led1: out STD_LOGIC);
end percobaan;

architecture Behavioral of percobaan is

type state_type is (s0,s1,s2,s3);
signal state : state_type;

signal maxsel,count : STD_LOGIC_VECTOR(13 downto 0);
signal lastbtn, flag : STD_LOGIC;

signal led : STD_LOGIC;
signal delay:std_logic_vector(4 downto 0);
CONSTANT delay1:std_logic_vector(4 downto 0):="11000";--delay 0.5 s
begin
		process (clr,clk,state,maxsel,lastbtn,flag)
		begin
			if clr='1' then
				state <= s0;
				maxsel<=(others=>'0');
			elsif clk'event and clk='1' then
				case state is
					when s0 =>
								if button(0)='1' and lastbtn='0' then maxsel<=maxsel+1; digit<=maxsel; state<=s1;
									elsif button(1)='1' and lastbtn='0' then maxsel<=maxsel+10; digit <=maxsel; flag <=not flag; state<=s1;
									elsif start='1' and lastbtn='0' then  digit<=maxsel; state<=s2;
									else  state<=s0;
								end if;
								lastbtn <= button(0) or button(1) or start;
								digit<=maxsel;
					
					when s1 =>
								if conv_integer(maxsel) > 255 then
									maxsel<=(others=>'0');
								end if;
								 state <= s0;
					when s2 =>
								if conv_integer(count)= maxsel then
										count <= maxsel; state<=s3;
								elsif (flag='0') then
									count <= count +1;
								else state <= s0;
								end if;
								digit<=count;
					when s3 =>
								flag<='1';
								if delay > delay1 then
									led <= not led;
										delay<=(others=>'0');
								else state <= s2;
								delay<=delay+1;
								end if;
								led1<=led;
				end case;		
			end if;
		end process;
end Behavioral;

