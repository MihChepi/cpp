
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{	
	std::cout << "PowerFist created!" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "PowerFist destroyed" << std::endl;
}

PowerFist::PowerFist(PowerFist const & cp) : AWeapon(cp)
{}

PowerFist & PowerFist::operator=(PowerFist const & op)
{
	if (this != &op)
		AWeapon::operator=(op);
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

