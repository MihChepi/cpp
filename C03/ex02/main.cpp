#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int	main(void)
{
	ClapTrap	clap;
	FragTrap	frag("Frog");
	FragTrap	cp(frag);
	FragTrap	op;
	ScavTrap	scav("Skovoroda");

	std::cout <<"-------------------------PARENT CLAP------------------------------" << std::endl;
	clap.takeDamage(20);
	clap.beRepaired(30);
	std::cout <<"----------------------FRAG SIMPLE --------------------------------" << std::endl;
	frag.takeDamage(20);
	frag.takeDamage(100);
	frag.beRepaired(30);
	frag.vaulthunter_dot_exe("stone");
	std::cout <<"--------------------------CP-----------------------------" << std::endl;
	cp.vaulthunter_dot_exe("stone");
	std::cout <<"------------------------OP-------------------------------" << std::endl;
	op.rangedAttack("stone");
	op = frag;
	op.rangedAttack("stone");
	std::cout <<"----------------------SCAV---------------------------------" << std::endl;
	scav.challengeNewcomer("stone");
	scav.takeDamage(20);
	scav.takeDamage(100);
	scav.beRepaired(30);
	std::cout <<"-------------------------------------------------------" << std::endl;

	return 0;
}
