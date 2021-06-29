#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern created!" << std::endl;
}

Intern::~Intern()
{}

Intern::Intern(Intern const & cp)
{
	*this = cp;
	std::cout << "Intern created!" << std::endl;
}

Intern	&Intern::operator=(Intern const & op)
{
	(void) op;
	return *this;
}

Form*	Intern::makeForm(std::string const & name, std::string const & target)
{

	std::string tmp[3] = { "shrubbery creation", "robotomy request", "Intern created form"};
	Form		*form[3];
	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; i++)
	{
		if (name == tmp[i])
		{
			for (int n = i + 1; n  < 3; n++)
				delete form[n];
			std::cout << "Intern created form " << form[i]->getName() << std::endl;
			return (form[i]);
		}
		delete form[i];
	}
	std::cout << "Form not found" << std::endl;
	return (nullptr);
}
