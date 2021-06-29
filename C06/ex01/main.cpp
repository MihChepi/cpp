
#include <iostream>
#include <sstream>

#include "Data.hpp"

void * serialize(void)
{
	int		i;
	char		*raw;
	std::string	s1;
	int		n;
	std::string	s2;

	raw = new char [52];

	for(i = 0; i < 10; i++)
		s1 += (rand() % 94) + 33;
	for(i = 0; i < 10; i++)
		s2 += (rand() % 94) + 33;
	n = rand();

	memcpy(raw, &s1, 24);
	memcpy(&raw[25], &n, 4);
	memcpy(&raw[29], &s2, 24);

	return (void*)raw;
}

int main()
{
	std::srand(std::time(0));
	void *raw;
	Data data;

	raw = serialize();
	data.deserialize(raw);
	data.print();

	delete static_cast<char*>(raw);

	return 0;
}
