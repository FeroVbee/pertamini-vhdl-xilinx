--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   06:07:24 06/26/2017
-- Design Name:   
-- Module Name:   C:/Users/Febby Ronaldo/Documents/Rangkaian Logika 2/VHDL data/Postest2/pertamini_TB.vhd
-- Project Name:  Postest2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PertaMini_TOP
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY pertamini_TB IS
END pertamini_TB;
 
ARCHITECTURE behavior OF pertamini_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PertaMini_TOP
    PORT(
         Mclock : IN  std_logic;
         Clr : IN  std_logic;
         Start : IN  std_logic;
         BTN : IN  std_logic_vector(1 downto 0);
         A_to_G : OUT  std_logic_vector(6 downto 0);
         AN : OUT  std_logic_vector(3 downto 0);
         Dotp : OUT  std_logic;
         LED : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Mclock : std_logic := '0';
   signal Clr : std_logic := '0';
   signal Start : std_logic := '0';
   signal BTN : std_logic_vector(1 downto 0) := (others => '0');

 	--Outputs
   signal A_to_G : std_logic_vector(6 downto 0);
   signal AN : std_logic_vector(3 downto 0);
   signal Dotp : std_logic;
   signal LED : std_logic;

   -- Clock period definitions
   constant Mclock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PertaMini_TOP PORT MAP (
          Mclock => Mclock,
          Clr => Clr,
          Start => Start,
          BTN => BTN,
          A_to_G => A_to_G,
          AN => AN,
          Dotp => Dotp,
          LED => LED
        );

   -- Clock process definitions
   Mclock_process :process
   begin
		Mclock <= '0';
		wait for Mclock_period/2;
		Mclock <= '1';
		wait for Mclock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for Mclock_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
