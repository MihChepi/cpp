#include <iostream>
#include <unistd.h>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int	main()
{
	memoryLeak();
	sleep(1000000);
	return (0);
}
