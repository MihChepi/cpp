
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{	
	std::cout << "PlasmaRifle created!" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "PlasmaRifle destroyed" << std::endl;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & cp) : AWeapon(cp)
{}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & op)
{
	if (this != &op)
		AWeapon::operator=(op);
	return *this;
}


void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

