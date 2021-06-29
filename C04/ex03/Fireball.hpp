#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "AMateria.hpp"

class AMateria;

class Fireball : public AMateria
{
	private:

	public:
		Fireball();
		Fireball(Fireball const & cp);
		~Fireball();
		Fireball & operator=(Fireball const & op);

		AMateria*	clone() const;
		void		use(ICharacter & target);
};

#endif
