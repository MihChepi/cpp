#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <sys/time.h>
#include <unistd.h>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string type;
	Zombie		**zb;
	int 		N;

public:
	ZombieHorde(int N = 10);
	~ZombieHorde();
	Zombie*	newZombie(std::string name = "Jon");
	void	announce();
};

#endif