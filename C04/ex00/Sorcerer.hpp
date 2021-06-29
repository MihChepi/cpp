#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
	private:
		std::string name;
		std::string title;
		Sorcerer();
	public:
		Sorcerer(std::string name, std::string title);
		~Sorcerer();
		Sorcerer(Sorcerer const &cp);
		Sorcerer &operator=(Sorcerer const &op);

		void 		polymorph(Victim const & obj) const;
		
		std::string	getName() const;
		std::string	getTitle() const;
};

std::ostream	&operator<<(std::ostream &os, Sorcerer const & obj);

#endif
