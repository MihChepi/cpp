#include "Sorcerer.hpp"

std::string	Sorcerer::getName() const {return name;}
std::string	Sorcerer::getTitle() const {return title;}

Sorcerer::Sorcerer(std::string name, std::string title)
	: name(name)
	, title(title) 
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &cp)
{
	name = cp.name;
	title = cp.title;
}

Sorcerer & Sorcerer::operator=(Sorcerer const &op)
{
	if (this != &op)
	{
		name = op.name;
		title = op.title;
	}
	return *this;
}


void Sorcerer::polymorph(Victim const & obj) const
{
	obj.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &os, Sorcerer const & obj)
{
	os << "I am " << obj.getName() << ", " << obj.getTitle() <<  " , and I like ponies!" << std::endl;
	return os;
}
