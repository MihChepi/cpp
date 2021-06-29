#ifndef POOL_C_FRAGTRAP_HPP
# define POOL_C_FRAGTRAP_HPP

# include <iostream>
# include <random>

class FragTrap
{
private:
	 int			Hit_points;
	 unsigned int	Max_hit_points;
	 unsigned int	Energy_points;
	 unsigned int	Max_energy_points;
	 unsigned int	Level;
	 std::string	Name;
	 unsigned int	Melee_attack_damage;
	 unsigned int	Ranged_attack_damage;
	 unsigned int	Armor_damage_reduction;
public:
	FragTrap();
	FragTrap(std::string name);
	 ~FragTrap();
	FragTrap(FragTrap const& cp);
	FragTrap & operator=(FragTrap const& op);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	int				getHP(void);
	std::string 	getName();
};

#endif //POOL_C_FRAGTRAP_HPP
