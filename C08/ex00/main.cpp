

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vect1(10, 0);
	try
	{
		easyfind(vect1, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found!" <<  std::endl;
	}

	try
	{
		std::list<int> list1(10, 0);
		std::cout << "find in vec " << *easyfind(list1, 4) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found!" <<  std::endl;
	}

	try
	{
		std::vector<int> vect2(10, 0);
		vect2[5] = 1;
		easyfind(vect2, 1);
		std::cout << "find in vec " << *easyfind(vect2, 1) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found!" <<  std::endl;
	}	

	try
	{
		std::vector<int> vect3(10, 0);
		vect3[9] = 1;
		easyfind(vect1, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << "not found!" <<  std::endl;
	}
	return 0;
}