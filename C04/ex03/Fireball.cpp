#include "Fireball.hpp"

Fireball::Fireball() : AMateria("fireball")
{}

Fireball::Fireball(Fireball const & cp) : AMateria(cp)
{}

Fireball::~Fireball()
{}

Fireball & Fireball::operator=(Fireball const & op)
{
	if (this != &op)
	{
		setType(op.getType());
		setXp(op.getXP());
	}
	return *this;
}

AMateria*	Fireball::clone() const
{
	return (AMateria*) new Fireball(*this);
}

void		Fireball::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an fireball bolt at " << target.getName() << " *" << std::endl;
}
