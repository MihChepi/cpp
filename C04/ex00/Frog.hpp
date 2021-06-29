#ifndef FROG_HPP
# define FROG_HPP

#include "Victim.hpp"
#include <iostream>

class Frog : public Victim
{
	private:
		Frog();
	public:
		Frog(std::string name);
		~Frog();
		Frog(Frog const &cp);
		Frog &operator=(Frog const &op);

		void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &os, Frog const & obj);

#endif
