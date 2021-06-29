#include "ScavTrap.hpp"

int	ScavTrap::getHP(void)
{
	return this->Hit_points;
}

ScavTrap::ScavTrap()
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 50;
	Max_energy_points = 50;
	Level = 1;
	Name = "SC4P-TP";
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 50;
	Max_energy_points = 50;
	Level = 1;
	Name = name;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor SC4V-TP called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cp)
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

ScavTrap & ScavTrap::operator=(ScavTrap const& op)
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

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->Name << " attacks " <<
			  target << " at range, causing " << this->Ranged_attack_damage <<
			  " points of damage!" << std::endl;
}
void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << this->Name << " attacks " <<
			  target << " at melee, causing " << this->Melee_attack_damage <<
			  " points of damage!" << std::endl;
}
void	ScavTrap::takeDamage(unsigned int amount)
{
	if ((this->Hit_points + this->Armor_damage_reduction > amount))
	{
		if (amount > this->Armor_damage_reduction)
		{
			amount -= this->Armor_damage_reduction;
			this->Hit_points -= amount;
			std::cout << "SC4V-TP " << this->Name << " take " <<
					  amount << " points of damage!" << std::endl;
		} else
			std::cout << "SC4V-TP " << this->Name << " take " <<
					  "0" << " points of damage!" << std::endl;
	}
	else
	{
		this->Hit_points = 0;
		std::cout << "SC4V-TP " << this->Name << " take " <<
				  amount - this->Armor_damage_reduction << " points of damage!" << std::endl;
		std::cout << "SC4V-TP " << this->Name << " is dead" << std::endl;
	}
}
void	ScavTrap::beRepaired(unsigned int amount)
{
	if ((this->Hit_points + amount) >= this->Max_hit_points)
	{
		this->Hit_points = this->Max_hit_points;
		std::cout << "SC4V-TP " << this->Name << " fully repaired" << std::endl;
	}
	else
	{
		this->Hit_points += amount;
		std::cout << "SC4V-TP repaired " << amount << " health point" << std::endl;
	}
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::srand(std::time(0));

	if (std::rand() % 3 == 0)
		std::cout << "HI, " << target << " you must eat a bucket KFC chickens" << std::endl;
	else if (std::rand() % 3 == 1)
		std::cout << "Hello " << target << " you must sleep 15 minutes" << std::endl;
	else
		std::cout << "HI, " << target << " just dance with me" << std::endl;
}