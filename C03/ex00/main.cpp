#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("FR4G-TP");

	frag.vaulthunter_dot_exe("stone");
	frag.takeDamage(20);
	frag.takeDamage(100);
	frag.takeDamage(100);
	frag.beRepaired(30);
	return 0;
}
