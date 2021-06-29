#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark" << std::endl;
}

Peon::Peon(Peon const &cp) : Victim(cp)
{
	std::cout << "Zog zog" << std::endl;
}

Peon & Peon::operator=(Peon const &op)
{
	if (this != &op)
	{
		setName(op.getName());
	}
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->getName() <<  " has been turned into a pink pony!" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Peon const & obj)
{
	os <<  "I'm " << obj.getName() << " and I like pony!" << std::endl;
	return os;
}
