
#include "Character.hpp"

Character::Character()	{}

Character::Character(std::string name) : _name(name)
{
	_materia = new AMateria * [4];
	for(int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

Character::~Character()
{
	if (_materia != nullptr)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (_materia[i] != nullptr)
				delete _materia[i];
			_materia[i] = nullptr;
		}
		delete [] _materia;
		_materia = nullptr;
	}
}


Character::Character(Character const & cp)
{
	_name = cp._name;
	_materia = new AMateria * [4];
	for(int i = 0; i < 4; i++)
		_materia[i] = cp._materia[i];
}

Character &Character::operator=(Character const & op)
{
	if (this != &op)
	{
		_name = op._name;
		for(int i = 0; i < 4; i++)
			_materia[i] = op._materia[i];
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int i = 0;

	while(_materia[i] != nullptr && i < 4)
		++i;
	if (i < 4){
		_materia[i] = m;
		std::cout << m->getType() << " equip on " << _name << std::endl;
	}
	else
		std::cout << "All slots is equped" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		_materia[idx] = nullptr;
	else
		std::cout << "Invalid index of materia for unequip" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
	{
		if (_materia[idx] != nullptr)
			_materia[idx]->use(target);
		else
			std::cout << "Materia is unequip" << std::endl;
	}
	else
		std::cout << "Invalid index for use materia" << std::endl;
}

