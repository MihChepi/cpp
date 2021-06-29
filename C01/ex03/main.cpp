#include "ZombieHorde.hpp"

int main()
{
	std::srand(std::time(0));
	ZombieHorde horde(10);
	horde.announce();
	return (0);
}
