#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_materia = new AMateria * [4];
	for(int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(MateriaSource const & cp)
{
	for(int i = 0; i < 4; i++)
		_materia[i] = cp._materia[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const & op)
{
	if (this != &op)
	{
		for(int i = 0; i < 4; i++)
			_materia[i] = op._materia[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while(_materia[i] != nullptr && i < 4)
		++i;
	if (i < 4){
		_materia[i] = m->clone();
		std::cout << m->getType() << " learn on index " << i << std::endl;
	}
	else
		std::cout << "All source slots are engaged" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_materia[i] != nullptr && _materia[i]->getType() == type)
			return _materia[i]->clone();
	}
	return nullptr;
}