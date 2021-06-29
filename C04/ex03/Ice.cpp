#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const & cp) : AMateria(cp)
{}

Ice::~Ice()
{}

Ice & Ice::operator=(Ice const & op)
{
	if (this != &op)
	{
		setType(op.getType());
		setXp(op.getXP());
	}
	return *this;
}

AMateria*	Ice::clone() const
{
	return (AMateria*) new Ice(*this);
}

void		Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
