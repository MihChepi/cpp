#ifndef REDSCORPION_HPP
# define REDSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		int			hp;
		std::string	type;
	public:
		RadScorpion();
		virtual ~RadScorpion();
		RadScorpion(RadScorpion const & cp);
		RadScorpion & operator=(RadScorpion const & op);

		void takeDamage(int dm);
};

#endif