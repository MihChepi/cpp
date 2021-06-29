#include "Peon.hpp"
#include "Frog.hpp"
#include "Sorcerer.hpp"

int	main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Frog frank("Frank");
	
	std::cout << robert << jim << joe << frank;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(frank);
	std::cout << joe.getName();
	return 0; 
}
