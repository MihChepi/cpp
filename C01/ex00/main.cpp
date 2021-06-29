
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony		*pony;
	pony = new Pony("Ivan", "Red", 42, 21);

	std::cout << "class Pony created!" << std::endl;
	std::cout << "name: " << pony->getName() << std::endl;
	std::cout << "color: " << pony->getColor() << std::endl;
	std::cout << "age: " << pony->getAge() << std::endl;
	std::cout << "tail length: " << pony->getTailLength() << std::endl;

	delete pony;
}

void ponyOnTheStack()
{
	Pony		pony("Ivan", "Red", 42, 21);

	std::cout << "class Pony created!" << std::endl;
	std::cout << "name: " << pony.getName() << std::endl;
	std::cout << "color: " << pony.getColor() << std::endl;
	std::cout << "age: " << pony.getAge() << std::endl;
	std::cout << "tail length: " << pony.getTailLength() << std::endl;
}

int	main()
{
	std::cout << "Create pony on the stack:" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl;
	std::cout << "Create pony on the heap:" << std::endl;
	ponyOnTheHeap();
	return 0;
}
