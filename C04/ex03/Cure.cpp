#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(Cure const & cp) : AMateria(cp)
{}

Cure::~Cure()
{}

Cure & Cure::operator=(Cure const & op)
{
	if (this != &op)
	{
		setType(op.getType());
		setXp(op.getXP());
	}
	return *this;
}

AMateria*	Cure::clone() const
{
	return (AMateria*) new Cure(*this);
}

void		Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
