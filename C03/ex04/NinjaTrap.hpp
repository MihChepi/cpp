#ifndef POOL_C_NINJATRAP_HPP
# define POOL_C_NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap
{
private:

public:
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const& cp);
	NinjaTrap & operator=(NinjaTrap const& op);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	ninjaShoebox(ClapTrap & target);
	void	ninjaShoebox(FragTrap & target);
	void	ninjaShoebox(ScavTrap & target);
	void	ninjaShoebox(NinjaTrap & target);
};

#endif //POOL_C_NINJATRAP_HPP