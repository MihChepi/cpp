#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;

public:
	ZombieEvent(std::string = "type");
	~ZombieEvent();

	Zombie*	newZombie(std::string name = "name");
	void	setZombieType(std::string type);
	Zombie	*randomChump();
};

#endif
