#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	SuperTrap	sp;

	sp.vaulthunter_dot_exe("Stone");
	sp.rangedAttack("TARGET");
	sp.meleeAttack("TARGET");
	std::cout <<"-------------------SCAV--------------------------------" << std::endl;
	ScavTrap	scav;
	sp.ninjaShoebox(scav);
	std::cout <<"-------------------------------------------------------" << std::endl;
	return 0;
}
