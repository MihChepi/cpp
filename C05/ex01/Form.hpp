#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

class Form
{
	private:
	std::string	const name;
	int			const grade_to_sign;
	int			const grade_to_exec;
	bool		sign;
	Form();

	public:
		~Form();
		Form(Form const & cp);
		Form & operator=(Form const & op);

		Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec);
	
		class GradeTooHighException : public std::exception
		{
			const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{;
			const char * what() const throw();
		};

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		std::string	getStatus() const;

		void		to_sign();

};

std::ostream &operator<<(std::ostream &os, Form const & obj);

#endif