#ifndef POOL_C_SUPERTRAP_HPP
# define POOL_C_SUPERTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>

class SuperTrap : public FragTrap, public NinjaTrap
{
private:

public:
	SuperTrap ();
	~SuperTrap ();
	SuperTrap (std::string name);
	SuperTrap (SuperTrap const& cp);
	SuperTrap  & operator=(SuperTrap const& op);

	using	FragTrap::rangedAttack;
	using	NinjaTrap::meleeAttack;

};

#endif //POOL_C_SUPERTRAP_HPP
