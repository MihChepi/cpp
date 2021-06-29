#ifndef ROBITOMY_HPP
# define ROBITOMY_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string const & name);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & cp);
		RobotomyRequestForm & operator=(RobotomyRequestForm const & op);

		virtual void	execute(Bureaucrat const & executor) const;
};

#endif