#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>

class Victim
{
	private:
		std::string name;
	public:
		Victim();
		Victim(std::string name);
		virtual ~Victim();
		Victim(Victim const &cp);
		Victim &operator=(Victim const &op);
		
		virtual void getPolymorphed() const;
		
		void		setName(std::string name);
		std::string	getName() const;
};

std::ostream	&operator<<(std::ostream &os, Victim const & obj);

#endif
