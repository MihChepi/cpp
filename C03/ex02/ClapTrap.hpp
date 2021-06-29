#ifndef POOL_C_CLAPTRAP_HPP
# define POOL_C_CLAPTRAP_HPP

# include <iostream>

class ClapTrap
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
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(	int				Hit_points,
				unsigned int	Max_hit_points,
				unsigned int	Energy_points,
				unsigned int	Max_energy_points,
				unsigned int	Level,
				std::string		Name,
				unsigned int	Melee_attack_damage,
				unsigned int	Ranged_attack_damage,
				unsigned int	Armor_damage_reduction);
	~ClapTrap();
	ClapTrap(ClapTrap const& cp);
	ClapTrap & operator=(ClapTrap const& op);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	int	getHit_points(void);
	int	getMax_hit_points(void);
	int	getEnergy_points(void);
	int	getMax_energy_points(void);
	int	getLevel(void);
	int	getMelee_attack_damage(void);
	int	getRanged_attack_damage(void);
	int	getArmor_damage_reduction(void);
	std::string getName(void);

};

#endif //POOL_C_CLAPTRAP_HPP
