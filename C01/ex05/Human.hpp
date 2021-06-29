#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	private:
		Brain const brain;
	public:
		Human();
		~Human();
		std::string	identify();
		Brain		&getBrain() const;
};

#endif