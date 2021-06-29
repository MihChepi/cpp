#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class AMateria;

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice(Ice const & cp);
		~Ice();
		Ice & operator=(Ice const & op);

		AMateria*	clone() const;
		void		use(ICharacter & target);
};

#endif
