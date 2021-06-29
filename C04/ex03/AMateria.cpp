#include "AMateria.hpp"

AMateria::AMateria() : _xp(0), _type("Nothing")	{}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)	{}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & cp)
{
	_xp = cp._xp;
	_type = cp._type;
}

AMateria &AMateria::operator=(AMateria const & op)
{
	if (this != &op)
	{
		_xp = op._xp;
		_type = op._type;
	}
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

void AMateria::setXp(unsigned int xp)
{
	_xp = xp;
}

void AMateria::setType(std::string type)
{
	_type = type;
}
