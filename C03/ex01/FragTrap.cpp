#include "FragTrap.hpp"

int	FragTrap::getHP(void)
{
	return this->Hit_points;
}

std::string	FragTrap::getName()
{
	return this->Name;
}

FragTrap::FragTrap()
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Name = "FR4G-TP";
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Name = name;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FR4G-TP called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cp)
{
	Hit_points = cp.Hit_points;
	Max_hit_points = cp.Max_hit_points;
	Energy_points = cp.Energy_points;
	Max_energy_points = cp.Max_energy_points;
	Level = cp.Level;
	Name = cp.Name;
	Melee_attack_damage = cp.Melee_attack_damage;
	Ranged_attack_damage = cp.Ranged_attack_damage;
	Armor_damage_reduction = cp.Armor_damage_reduction;
	std::cout << "FR4G-TP created!" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const& op)
{
	if (this != &op)
	{
		Hit_points = op.Hit_points;
		Max_hit_points = op.Max_hit_points;
		Energy_points = op.Energy_points;
		Max_energy_points = op.Max_energy_points;
		Level = op.Level;
		Name = op.Name;
		Melee_attack_damage = op.Melee_attack_damage;
		Ranged_attack_damage = op.Ranged_attack_damage;
		Armor_damage_reduction = op.Armor_damage_reduction;
	}
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " <<
	target << " at range, causing " << this->Ranged_attack_damage <<
	" points of damage!" << std::endl;
}
void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " <<
	target << " at melee, causing " << this->Melee_attack_damage <<
	" points of damage!" << std::endl;
}
void	FragTrap::takeDamage(unsigned int amount)
{
	if ((this->Hit_points + this->Armor_damage_reduction > amount))
	{
		if (amount > this->Armor_damage_reduction)
		{
			amount -= this->Armor_damage_reduction;
			this->Hit_points -= amount;
			std::cout << "FR4G-TP " << this->Name << " take " <<
					  amount << " points of damage!" << std::endl;
		} else
			std::cout << "FR4G-TP " << this->Name << " take " <<
					  "0" << " points of damage!" << std::endl;
	}
	else
	{
		this->Hit_points = 0;
		std::cout << "FR4G-TP " << this->Name << " take " <<
				  amount - this->Armor_damage_reduction << " points of damage!" << std::endl;
		std::cout << "FR4G-TP " << this->Name << " is dead" << std::endl;
	}
}
void	FragTrap::beRepaired(unsigned int amount)
{
	if ((this->Hit_points + amount) >= this->Max_hit_points)
	{
		this->Hit_points = this->Max_hit_points;
		std::cout << "FR4G-TP repaired all " <<
		this->Max_hit_points -  this->Hit_points <<
		" health point" << std::endl;
	}
	else
	{
		this->Hit_points += amount;
		std::cout << "FR4G-TP repaired " << amount << " health point" << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::srand(std::time(nullptr));

	if (std::rand() % 2 == 0)
		FragTrap::meleeAttack(target);
	else
		FragTrap::rangedAttack(target);
}