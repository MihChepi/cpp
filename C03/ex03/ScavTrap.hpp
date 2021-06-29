#ifndef POOL_C_SCAVTRAP_HPP
# define POOL_C_SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const& cp);
	ScavTrap & operator=(ScavTrap const& op);

	void   challengeNewcomer(std::string const & target);
};

#endif //POOL_C_SCAVTRAP_HPP
