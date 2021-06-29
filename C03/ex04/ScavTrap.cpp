#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(100, 100,50, 50, 1, "SC4V-TP",20, 15, 3)
{
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100,50, 50, 1, name,20, 15, 3)
{
	std::cout << "ScavTrap created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cp) : ClapTrap(cp)
{
	std::cout << "ScavTrap copy created!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const& op)
{
	if (this != &op)
		ClapTrap::operator=(op);
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::srand(std::time(0));

	if (std::rand() % 3 == 0)
		std::cout << BLU << "HI, " << target << " you must eat a bucket KFC chickens" << RESET << std::endl;
	else if (std::rand() % 3 == 1)
		std::cout << BLU <<  "Hello " << target << "  you must sleep 15 minutes" << RESET << std::endl;
	else
		std::cout << BLU << "HI, " << target << " just dance with me" << RESET << std::endl;
}
