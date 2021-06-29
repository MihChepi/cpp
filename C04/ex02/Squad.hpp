#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		ISpaceMarine**	unit;
		int				unit_count;
	
	public:
		Squad();
		~Squad();

		Squad(Squad const & cp);
		Squad & operator=(Squad const & op);

		int				getCount() const;
		ISpaceMarine*	getUnit(int) const;
		int				push(ISpaceMarine*);
		
		bool			is_in_squad(ISpaceMarine* sm);
		ISpaceMarine**	clone_squad() const;
		void			delete_squad();
	
};

#endif
