#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap	frag("Yandex");
	ScavTrap	scav("Google");

	frag.vaulthunter_dot_exe("stone");
	frag.takeDamage(20);
	frag.takeDamage(100);
	frag.beRepaired(30);

	scav.challengeNewcomer("stone");
	scav.takeDamage(20);
	scav.takeDamage(100);
	scav.beRepaired(30);
	scav.takeDamage(20);

	return 0;
}
