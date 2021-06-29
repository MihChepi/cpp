#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

# include "Form.hpp" 

class Bureaucrat
{
	private:
		std::string	const name;
		int			grade;
		Bureaucrat();
	public:
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & cp);
		Bureaucrat & operator=(Bureaucrat const & op);
	
		Bureaucrat(std::string name, int grade);
	
		class GradeTooHighException : public std::exception
		{
			const char * what() const throw();
		};
		class GradeTooLowException : public std::exception
		{;
			const char * what() const throw();
		};

		std::string	getName() const;
		int			getGrade() const;

		void	inc();
		void	dec();

		void	signForm(Form & form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const & obj);

#endif