#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	private:

	public:
		Intern();
		~Intern();
		Intern(Intern const & cp);
		Intern	&operator=(Intern const & op);

		Form*	makeForm(std::string const & name, std::string const & target);
};


#endif