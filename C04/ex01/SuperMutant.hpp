#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
		int			hp;
		std::string	type;
	public:
		SuperMutant();
		virtual ~SuperMutant();
		SuperMutant(SuperMutant const & cp);
		SuperMutant & operator=(SuperMutant const & op);

		void takeDamage(int dm);
};

#endif