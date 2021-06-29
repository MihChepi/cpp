#include "ClapTrap.hpp"

int	ClapTrap::getHit_points(void)				{return this->Hit_points;}
int	ClapTrap::getMax_hit_points(void)			{return this->Max_hit_points;}
int	ClapTrap::getEnergy_points(void)			{return this->Energy_points;}
int	ClapTrap::getMax_energy_points(void)		{return this->Max_energy_points;}
int	ClapTrap::getLevel(void)					{return this->Level;}
int	ClapTrap::getMelee_attack_damage(void)		{return this->Melee_attack_damage;}
int	ClapTrap::getRanged_attack_damage(void)		{return this->Ranged_attack_damage;}
int	ClapTrap::getArmor_damage_reduction(void)	{return this->Armor_damage_reduction;}
std::string ClapTrap::getName(void)				{return this->Name;}

ClapTrap::ClapTrap()
{
	Hit_points = 100;
	Max_hit_points = 100;
	Energy_points = 100;
	Max_energy_points = 100;
	Level = 1;
	Name = "CL4P-TP";
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
	std::cout << "ClapTrap (parent) crated!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
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
	std::cout << "ClapTrap (parent) created!" << std::endl;
}

ClapTrap::ClapTrap(	int		Hit_points,
			 unsigned int	Max_hit_points,
			 unsigned int	Energy_points,
			 unsigned int	Max_energy_points,
			 unsigned int	Level,
			 std::string	Name,
			 unsigned int	Melee_attack_damage,
			 unsigned int	Ranged_attack_damage,
			 unsigned int	Armor_damage_reduction) :
			 Hit_points(Hit_points),
			 Max_hit_points(Max_hit_points),
			 Energy_points(Energy_points),
			 Max_energy_points(Max_energy_points),
			 Level(Level),
			 Name(Name),
			 Melee_attack_damage(Melee_attack_damage),
			 Ranged_attack_damage(Ranged_attack_damage),
			 Armor_damage_reduction(Armor_damage_reduction)
{
	std::cout << "ClapTrap (parent) "  << getName() << " created!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor TPAP " << Name << "  called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cp)
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
	std::cout << "ClapTrap created!" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const& op)
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

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "TPAP " << this->Name << " attacks " <<
			  target << " at range, causing " << this->Ranged_attack_damage <<
			  " points of damage!" << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "TPAP " << this->Name << " attacks " <<
			  target << " at melee, causing " << this->Melee_attack_damage <<
			  " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((this->Hit_points + this->Armor_damage_reduction > amount))
	{
		if (amount > this->Armor_damage_reduction)
		{
			amount -= this->Armor_damage_reduction;
			this->Hit_points -= amount;
			std::cout << "TPAP " << this->Name << " take " <<
					  amount << " points of damage!" << std::endl;
		} else
			std::cout << "TPAP " << this->Name << " take " <<
					  "0" << " points of damage!" << std::endl;
	}
	else
	{
		this->Hit_points = 0;
		std::cout << "TPAP " << this->Name << " take " <<
				  amount - this->Armor_damage_reduction << " points of damage!" << std::endl;
		std::cout << "TPAP " << this->Name << " is dead" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->Hit_points + amount) >= this->Max_hit_points)
	{
		this->Hit_points = this->Max_hit_points;
		std::cout << "TPAP " << getName() << " fully repaired" << std::endl;
	}
	else
	{
		this->Hit_points += amount;
		std::cout << "TPAP repaired " << amount << " health point" << std::endl;
	}
}