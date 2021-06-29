
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *misha = new Bureaucrat("Misha", 150);
		std::cout << *misha << std::endl;
		misha->inc();
		misha->dec();
		misha->dec();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat *misha = new Bureaucrat("Misha", 1);
		std::cout << *misha << std::endl;
		misha->dec();
		misha->dec();
		misha->inc();
		misha->inc();
		misha->inc();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}