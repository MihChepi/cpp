#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	private:

	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(TacticalMarine const & cp);
		
		TacticalMarine & operator=(TacticalMarine const & op);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
