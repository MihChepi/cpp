#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
}
Zombie::~Zombie()
{}

void	Zombie::announce(void)
{
	std::string set_brr[10] = {"Brrr", "AAAAA", "Rrrrrrrr", "Privet",
							"Lalalala", "Auf", "Brrrue", "Qqqq", "Hi", "I love you"};

	std::cout << this->name;
	std::cout << " (" << this->type << ") ";
	std::cout << set_brr[std::rand() % 10] << std::endl;
}

