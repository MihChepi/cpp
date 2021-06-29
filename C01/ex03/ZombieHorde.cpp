#include "ZombieHorde.hpp"

Zombie*	ZombieHorde::newZombie(std::string name)
{
	Zombie *zombie;
	zombie = new Zombie(name);
	return (zombie);
}

ZombieHorde::ZombieHorde(int N)
{
	if (N > 0)
		this->N = N;
	else
		N = 0;
	this->zb = new Zombie*[N];
	std::string set_name[] = {"Jon", "Frimen", "Alex", "Kozi", "Rozi",
						   "Mozi", "Gozi", "ShaSha", "Masha", "Misha"};

	for(int i = 0; i < N; i++)
	{
		this->zb[i] = this->newZombie(set_name[rand() % 10]);
	}
	std::cout << "Horde created" << std::endl;
}
ZombieHorde::~ZombieHorde()
{
	for(int i = 0; i < this->N; i++)
	{
		delete this->zb[i];
	}
	delete [] this->zb;
	std::cout << "Horde destroyed\n";
}

void	ZombieHorde::announce()
{
	std::cout << "Horde announce" << std::endl;
	for(int i = 0; i < this->N; i++)
	{
		this->zb[i]->announce();
	}

}