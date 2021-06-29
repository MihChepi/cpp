
#include "Character.hpp"


Character::Character()
{}

std::string Character::getName() const
{
	return name;
}

int		Character::getAp() const
{
	return ap;
}

int		Character::checkWeapon() const
{
	if (weapon != nullptr)
		return 1;
	return 0;
}

std::string Character::getWeaponName() const
{
	if (weapon != 0)
		return weapon->getName();
	return 0;
}

AWeapon		*Character::getWeapon() const
{
	return (this->weapon);
}

void Character::attack(Enemy* en)
{
	if (this->weapon == nullptr)
			std::cout << "Need weapon!" << std::endl;
	else if (this->ap -weapon->getAPCost() > 0)
	{
		this->ap -=	weapon->getAPCost();
		this->weapon->attack();
		en->takeDamage(this->weapon->getDamage());
	}
	else
		std::cout << "Need AP!" << std::endl;
}

void Character::equip(AWeapon* wp) 
{
	weapon = wp;
}

void Character::recoverAP()
{
	if (ap + 10 <= 40)
		ap += 10;
	else
		ap = 40;
}

Character & Character::operator=(Character const & op)
{
	if (this != &op)
	{
		name = op.name;
		ap = op.ap;
		weapon = op.weapon;
	}
	return *this;
}

Character::Character(Character const & cp)
{
		name = cp.name;
		ap = cp.ap;
		weapon = cp.weapon;
}

Character::~Character()
{
	std::cout << "Character deleted" << std::endl;
}

Character::Character(std::string const & name) : name(name), ap(40), weapon(nullptr)
{
	std::cout << "Character created" << std::endl;
}

std::ostream	& operator<<(std::ostream &os, Character const & obj)
{
	if (obj.checkWeapon() != 0)
		os << obj.getName() << " has " << obj.getAp() << " AP and wields a "<< obj.getWeaponName() << std::endl;
	else
		os << obj.getName() << " has " << obj.getAp() << " AP and is unarmed" << std::endl;	
	return os;
}