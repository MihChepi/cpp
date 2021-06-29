#ifndef AWEAPON_HPP	
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
private:
	std::string name;
	int			apcost;
	int			damage;	
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon const & cp);
	AWeapon & operator=(AWeapon const & op);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	
	virtual void attack() const = 0;
};

#endif

