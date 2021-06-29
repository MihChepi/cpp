#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "NINJ4-TP", 60, 5, 0)
{
	std::cout << "NinjaTrap created!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << "NinjaTrap created!" << std::endl;
}


NinjaTrap::~NinjaTrap()
{
	std::cout << "Destructor NinjaTrap called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& cp) : ClapTrap(cp)
{
	std::cout << "NinjaTrap copy created!" << std::endl;
}


NinjaTrap & NinjaTrap::operator=(NinjaTrap const& op)
{
	if (this != &op)
		ClapTrap::operator=(op);
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << RED << "TPAP " << this->Name << " attacks (like NinjaTrap) " <<
			  target << " at range, causing " << this->Ranged_attack_damage <<
			  " points of damage!" << RESET << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << RED << "TPAP " << this->Name << " attacks (like NinjaTrap) " <<
			  target << " at melee, causing " << this->Melee_attack_damage <<
			  " points of damage!" << RESET << std::endl;
}

void 	NinjaTrap::ninjaShoebox(FragTrap & target)
{
	std::cout << RED << "Ninja " << this->getName() << " kiss fragTrap "
	<< target.getName() << RESET << std::endl;
}

void 	NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	std::cout << RED << "Ninja " << this->getName() << " huge scavTrap "
			  << target.getName() << RESET << std::endl;
}

void 	NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	std::cout << RED << "Ninja " << this->getName() << " love ninjaTrap "
			  << target.getName() << RESET << std::endl;
}

void 	NinjaTrap::ninjaShoebox(ClapTrap & target)
{
	std::cout << RED << "Ninja " << this->getName() << " like your parent "
			  << target.getName() << RESET << std::endl;
}

