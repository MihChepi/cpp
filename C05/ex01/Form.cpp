#include "Form.hpp"

Form::Form() :
			name(""),
			grade_to_sign(1),
			grade_to_exec(1),
			sign(false)
{}

Form::~Form()
{
	std::cout << "Form " << name <<  " destroyed!" << std::endl;
}

Form::Form(Form const & cp) :
						name(cp.name),
						grade_to_sign(cp.grade_to_sign),
						grade_to_exec(cp.grade_to_exec),
						sign(cp.sign)
{}

Form & Form::operator=(Form const & op)
{
	if (this != &op)
	{
		sign = op.sign;
	}
	return *this;
}
Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec) :
						name(name),
						grade_to_sign(grade_to_sign),
						grade_to_exec(grade_to_exec),
						sign(false)
{
	if (grade_to_sign < 1)
		throw Form::GradeTooHighException();
	if (grade_to_sign > 150)
		throw Form::GradeTooLowException();
	if (grade_to_exec < 1)
		throw Form::GradeTooHighException();
	if (grade_to_exec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << name << " created! sign = " << this->getGradeToSign()
							<< " exec = " << this->getGradeToExec() << std::endl;

}

const char * Form::GradeTooHighException::what() const throw()
{
	return "too High!";
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "too Low!";
}

std::string	Form::getName() const
{
	return name;
}

int			Form::getGradeToSign() const
{
	return grade_to_sign;
}

int			Form::getGradeToExec() const
{
	return grade_to_exec;
}

std::string	Form::getStatus() const
{
	if (this->sign == 0)
		return ("not signed");
	else
		return ("signed");
}

void		Form::to_sign()
{
	this->sign = true;
}


std::ostream &operator<<(std::ostream  &os, Form const & obj)
{
	os << "Form " << obj.getName() << " has status " << obj.getStatus();
	return (os);
}