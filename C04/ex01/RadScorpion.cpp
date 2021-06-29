#include "RadScorpion.hpp"
		
RadScorpion::RadScorpion() : Enemy(80, "RedScorpion")
{
		std::cout << "* click click click *" << std::endl;
}
RadScorpion::~RadScorpion()
{
	std::cout << "Destroyed RadScorpion" << std::endl;
}
RadScorpion::RadScorpion(RadScorpion const & cp) : Enemy(cp)
{}

RadScorpion & RadScorpion::operator=(RadScorpion const & op)
{
	if (this != &op)
	{
		hp = op.hp;
		type = op.type;
	}
	return *this;
}

void RadScorpion::takeDamage(int dm)
{
	Enemy::takeDamage(dm);
	if (this->getHP() <= 0)
		std::cout << "* SPROTCH *" << std::endl;
}