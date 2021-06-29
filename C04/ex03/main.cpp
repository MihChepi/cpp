#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fireball.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fireball());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("fireball");
	me->equip(tmp);
	
	tmp = src->createMateria("fireball");
	me->equip(tmp);

	tmp = src->createMateria("fireball");
	me->equip(tmp);

	me->unequip(3);
	me->equip(tmp);

	 ICharacter* bob = new Character("Bob");
	 ICharacter* misha = new Character(*((Character *)bob));


	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(5, *bob);
	me->use(2, *misha);

	me->unequip(3);
	me->use(2, *misha);

	delete me;
	delete bob;
	delete misha;
	delete src;
	return 0;
}