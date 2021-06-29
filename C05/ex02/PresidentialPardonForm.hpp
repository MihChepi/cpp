#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	target;
		PresidentialPardonForm();
	public:
		PresidentialPardonForm(std::string const & target);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const & cp);
		PresidentialPardonForm & operator=(PresidentialPardonForm const & op);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif