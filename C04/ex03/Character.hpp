#ifndef CHARACTER_HPP
# define CHARACTER_HPP 

# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		**_materia;
		Character();
	public:
		Character(std::string name);
		~Character();
		Character(Character const & cp);
		Character &operator=(Character const & op);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif