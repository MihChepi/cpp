#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class AMateria;

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(Cure const & cp);
		~Cure();
		Cure & operator=(Cure const & op);

		AMateria*	clone() const;
		void		use(ICharacter & target);
};

#endif
