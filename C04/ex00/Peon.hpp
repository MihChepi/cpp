#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"
#include <iostream>

class Peon : public Victim
{
	private:
		Peon();
	public:
		Peon(std::string name);
		~Peon();
		Peon(Peon const &cp);
		Peon &operator=(Peon const &op);

		void getPolymorphed() const;
};

std::ostream	&operator<<(std::ostream &os, Peon const & obj);

#endif
