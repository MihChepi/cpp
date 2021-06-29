#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	target;
		ShrubberyCreationForm();
	public:
		ShrubberyCreationForm(std::string const & name);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const & cp);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & op);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif