#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	private:

	public:
		AssaultTerminator();
		~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const & cp);

		AssaultTerminator & operator=(AssaultTerminator const & ob);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
