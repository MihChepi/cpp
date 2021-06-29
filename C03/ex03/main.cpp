#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <unistd.h>


int	main(void)
{
	ClapTrap	clap("Clavparent");
	FragTrap	frag("Frog");
	ScavTrap	scav("Skovoroda");
	NinjaTrap	nj("Mojna");

	nj.ninjaShoebox(frag);
	nj.ninjaShoebox(scav);
	nj.ninjaShoebox(nj);
	nj.ninjaShoebox(clap);
	nj.rangedAttack(frag.getName());
	frag.vaulthunter_dot_exe(nj.getName());
	return 0;
}
