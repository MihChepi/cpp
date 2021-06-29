
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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
		Bureaucrat *misha = new Bureaucrat("Misha", 150);
		Form *pres = new PresidentialPardonForm("Presidental");
		Form *rob = new RobotomyRequestForm("Robotomy");
		Form *sh = new ShrubberyCreationForm("Shrubbery");
		misha->signForm(*pres);
		misha->signForm(*rob);
		misha->signForm(*sh);
		for (int i = 0; i < 90; i++)
			misha->inc();
		misha->signForm(*pres);
		misha->signForm(*rob);
		misha->signForm(*sh);
		std::cout << *pres << " | " << *rob << " | " << *sh << std::endl;
		for (int i = 0; i < 40; i++)
			misha->inc();
		misha->signForm(*pres);
		misha->executeForm(*pres);
		for (int i = 0; i < 15; i++)
			misha->inc();
		pres->execute(*misha);
		rob->execute(*misha);
		sh->execute(*misha);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	
	std::cout << "----------------------------------------------" << std::endl;
	try
	{
		Form *rob = new RobotomyRequestForm("Robotomy");
		Bureaucrat *misha = new Bureaucrat("Misha", 50);
		std::cout << *misha << std::endl;
		misha->signForm(*rob);
		rob->execute(*misha);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}