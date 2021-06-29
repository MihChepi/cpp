#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(100, 100, 120, 120, 1, "SUPER-TP", 60, 20, 5 )
{
	std::cout << "SuperTrap created!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5 )
{
	std::cout << "SuperTrap created!" << std::endl;
}


SuperTrap::~SuperTrap()
{
	std::cout << "Destructor SuperTrap called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const& cp) : ClapTrap(cp)
{
	std::cout << "SuperTrap copy created!" << std::endl;
}


SuperTrap & SuperTrap::operator=(SuperTrap const& op)
{
	if (this != &op)
		ClapTrap::operator=(op);
	return *this;
}
