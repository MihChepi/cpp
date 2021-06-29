
#include "Victim.hpp"

std::string	Victim::getName() const {return name;}

void		Victim::setName(std::string name)
{
	this->name = name;
}

Victim::Victim()
{}

Victim::Victim(std::string name)
	: name(name)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " <<  name  << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &cp)
{
	name = cp.name;
}

Victim & Victim::operator=(Victim const &op)
{
	if (this != &op)
	{
		name = op.name;
	}
	return *this;
}

void	Victim::getPolymorphed() const
{
	std::cout << name <<  " has been turned into a cute little sheep!" << std::endl;
}


std::ostream	&operator<<(std::ostream &os, Victim const & obj)
{
	os <<  "I'm " << obj.getName() << " and I like otters!" << std::endl;	
	return os;
}
