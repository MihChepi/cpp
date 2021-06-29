#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <sstream>
#include <iostream>

class Brain
{
	private:
		std::string freshness;
		std::string size;

	public:
		Brain(std::string freshness = "fresh", std::string size = "big");
		~Brain();
		std::string identify() const;
};

#endif