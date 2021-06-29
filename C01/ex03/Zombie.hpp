#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
		std::string type;

	public:
		Zombie(std::string name = "Jon", std::string type = "simple");
		~Zombie();
		void	announce();
};

#endif