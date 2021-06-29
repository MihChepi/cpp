#include "Frog.hpp"

Frog::Frog()
{}

Frog::Frog(std::string name) : Victim(name)
{
	std::cout << "Zog Zog" << std::endl;
}

Frog::~Frog()
{
	std::cout << "Bleuark" << std::endl;
}

Frog::Frog(Frog const &cp) : Victim(cp)
{
	std::cout << "Zog Zog" << std::endl;
}

Frog & Frog::operator=(Frog const &op)
{
	if (this != &op)
	{
		setName(op.getName());
	}
	return *this;
}

void	Frog::getPolymorphed() const
{
	std::cout << this->getName() <<  " has been turned into a green forg!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Frog const & obj)
{
	os <<  "I'm " << obj.getName() << " and I like frog!" << std::endl;
	return os;
}
