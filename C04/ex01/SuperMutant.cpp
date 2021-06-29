#include "SuperMutant.hpp"
		
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
		std::cout << "Gaaah. Me want smash heads!" << std::endl;
}
SuperMutant::~SuperMutant()
{
	std::cout << "Destroyed SuperMutant" << std::endl;
}
SuperMutant::SuperMutant(SuperMutant const & cp) : Enemy(cp)
{}

SuperMutant & SuperMutant::operator=(SuperMutant const & op)
{
	if (this != &op)
	{
		hp = op.hp;
		type = op.type;
	}
	return *this;
}

void SuperMutant::takeDamage(int dm)
{
	Enemy::takeDamage(dm - 3);
	if (this->getHP() <= 0)
		std::cout << "Aaargh..." << std::endl;
}