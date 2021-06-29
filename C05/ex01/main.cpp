
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat *misha = new Bureaucrat("Misha", 150);
		std::cout << *misha << std::endl;
		misha->inc();
		misha->dec();
		delete misha;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------------" << std::endl;

	try
	{
		Form *test = new Form("Test blank", 80, 90);
		std::cout << *test << std::endl;
		Bureaucrat *misha = new Bureaucrat("Misha", 150);
		std::cout << *misha << std::endl;
		misha->signForm(*test);
		std::cout << *test << std::endl;
		for (int i = 0; i < 90; i++)
			misha->inc();
		std::cout << *test << std::endl;
		misha->signForm(*test);
		std::cout << *test << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}