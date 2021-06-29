#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Enemy.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	
	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* s = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->attack(b);
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(s);
	me->attack(s);
	me->attack(s);
	me->recoverAP();
	me->recoverAP();
	me->attack(s);
	me->attack(s);

	delete b;
	delete s;
	delete pr;
	delete me;

	return 0;
}

