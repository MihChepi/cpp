#ifndef POOL_C_FRAGTRAP_HPP
# define POOL_C_FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& cp);
	FragTrap & operator=(FragTrap const& op);

	void 	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif //POOL_C_FRAGTRAP_HPP
