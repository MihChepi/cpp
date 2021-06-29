#include "Array.hpp"

int main()
{

	Array<int>		aiempty;
	Array<float>		af;
	Array<char*>		ac;
	Array<std::string>	as;
	std::cout << "-----------" << std::endl;
	Array<int>		ai(20);
	try
	{
		for (int i = 0; i < 20; i++)
			ai[i] = i;
		for (int i = 0; i < 20; i++)
			std::cout << ai[i] << " "; 
		std::cout << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}