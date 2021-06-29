#include <iostream>

int main()
{
	std::string	str;
	str = "HI THIS IS BRAIN";

	std::string	*p;
	p = &str;
	std::cout << "pointer: " << *p << std::endl;

	std::string &ref = str;
	std::cout << "reference: " << ref << std::endl;
	return 0;
}
