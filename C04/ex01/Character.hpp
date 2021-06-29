#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int			ap;
		AWeapon		*weapon;
		
		Character();
	public:		
		Character(std::string const & name);
		~Character();
		Character(Character const & cp);
		Character & operator=(Character const & op);
		
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		AWeapon		*getWeapon() const;
		int			checkWeapon() const;
		int			getAp() const;
		std::string getName() const;
		std::string getWeaponName() const;
};

std::ostream	& operator<<(std::ostream &os, Character const & obj);

#endif