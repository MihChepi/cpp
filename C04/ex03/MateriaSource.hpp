#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP 

# include <iostream>
# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria **_materia;
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const & cp);
		MateriaSource &operator=(MateriaSource const & op);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif