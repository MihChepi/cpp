#ifndef POOL_C_SCAVTRAP_HPP
# define POOL_C_SCAVTRAP_HPP

# include <iostream>
# include <random>

class ScavTrap
{
private:
	int				Hit_points;
	unsigned int	Max_hit_points;
	unsigned int	Energy_points;
	unsigned int	Max_energy_points;
	unsigned int	Level;
	std::string		Name;
	unsigned int	Melee_attack_damage;
	unsigned int	Ranged_attack_damage;
	unsigned int	Armor_damage_reduction;
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(ScavTrap const& cp);
	ScavTrap & operator=(ScavTrap const& op);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void    challengeNewcomer(std::string const & target);

	int		getHP(void);
};

#endif //POOL_C_SCAVTRAP_HPP
