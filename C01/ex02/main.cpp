#include <unistd.h>
#include <sys/time.h>
#include "ZombieEvent.hpp"

int main(int argc, char **argv)
{
	Zombie		*zb;
	ZombieEvent zombieEvent;
	std::string type;

	std::srand(std::time(0));
	type = "standard";
	if (argc >= 2)
		type = argv[1];
	zombieEvent.setZombieType(type);
	zb = zombieEvent.randomChump();
	delete zb;
	return 0;
}
