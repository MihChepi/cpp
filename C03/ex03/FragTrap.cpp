#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100,100, 100, 1, "FR4G-TP",30, 20, 5)
{
	std::cout << "FragTrap created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100,100, 100, 1,  name,30, 20, 5)
{
	std::cout << "FragTrap created!" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrup called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cp) : ClapTrap(cp)
{
	std::cout << "FragTrap copy created!" << std::endl;
}


FragTrap & FragTrap::operator=(FragTrap const& op)
{
	if (this != &op)
		ClapTrap::operator=(op);
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << GRN << "TPAP " << this->Name << " attacks (like FragTrap) " <<
			  target << " at range, causing " << this->Ranged_attack_damage <<
			  " points of damage!" << RESET << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << GRN << "TPAP " << this->Name << " attacks (like FragTrap) " <<
			  target << " at melee, causing " << this->Melee_attack_damage <<
			  " points of damage!" << RESET << std::endl;
}


void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::srand(std::time(nullptr));

	if (std::rand() % 2 == 0)
		FragTrap::meleeAttack(target);
	else
		FragTrap::rangedAttack(target);
}
