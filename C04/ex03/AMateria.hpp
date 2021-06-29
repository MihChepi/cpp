#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICaracter;

class AMateria
{
	private:
		unsigned int	_xp;
		std::string		_type;
		AMateria();
	public:
		virtual ~AMateria();
		AMateria(AMateria const & cp);
		AMateria &operator=(AMateria const & op);
		
		AMateria(std::string const & type);
		
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

		void setXp(unsigned int xp);
		void setType(std::string type);	
};

#endif 
