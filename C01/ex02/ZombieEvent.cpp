#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)	{this->type = type;}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie;
	zombie = new Zombie(name, this->type);
	return zombie;
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *zb;
	std::string set_name[] = {"Jon", "Frimen", "Alex", "Kozi", "Rozi",
							  "Mozi", "Gozi", "ShaSha", "Masha", "Misha"};
	zb = this->newZombie(set_name[rand() % 10]);
	zb->Zombie::announce();
	return zb;
}

ZombieEvent::ZombieEvent(std::string type)
{
	ZombieEvent::setZombieType(type);
}

ZombieEvent::~ZombieEvent() {}




