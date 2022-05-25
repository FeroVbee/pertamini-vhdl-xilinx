--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:23:34 07/02/2017
-- Design Name:   
-- Module Name:   C:/Users/Febby Ronaldo/Documents/Rangkaian Logika 2/VHDL data/Postest2/PertaMinii_TB.vhd
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
 
ENTITY PertaMinii_TB IS
END PertaMinii_TB;
 
ARCHITECTURE behavior OF PertaMinii_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PertaMini_TOP
    PORT(
         Mclock : IN  std_logic;
         Clr : IN  std_logic;
         Start : IN  std_logic;
         Puluhan : IN  std_logic;
         Satuan : IN  std_logic;
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
   signal Puluhan : std_logic := '0';
   signal Satuan : std_logic := '0';

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
          Puluhan => Puluhan,
          Satuan => Satuan,
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
      wait for 10 ns;
		Satuan <= '1';
		wait for 10 ns;
		Satuan <= '0';
		
		wait for 20 ns;
		Start <= '1';
		wait for 20 ns;
		Start <= '0';
		
		wait for 100 ns;
		Clr <= '1';
		wait for 20 ns;
		Clr <= '0';

      wait for Mclock_period*10;
   end process;

END;
