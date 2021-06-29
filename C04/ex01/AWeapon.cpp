#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{
	std::cout << "Weapon created!" << std::endl;
}

AWeapon::AWeapon(AWeapon const & cp)
{
	name = cp.name;
	apcost = cp.apcost;
	damage = cp.damage;
}


AWeapon & AWeapon::operator=(AWeapon const & op)
{
	if (this != &op)
	{
		name = op.name;
		apcost = op.apcost;
		damage = op.damage;
	}
	return *this;
}

AWeapon::~AWeapon()
{
	std::cout << "Weapon destroyed!" << std::endl;
}

std::string  AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}

