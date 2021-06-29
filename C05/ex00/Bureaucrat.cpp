#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << name <<  " destroyed!" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & cp) : name(cp.name), grade(cp.grade)
{}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & op)
{
	if (this != &op)
	{
		grade = op.grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << name << " created!" << std::endl;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "too High!";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "too Low!";
}

std::string	Bureaucrat::getName() const
{
	return name;
}

int			Bureaucrat::getGrade() const
{
	return grade;
}

void	Bureaucrat::inc()
{
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		grade--;
		std::cout << *this  << std::endl;
	}
}

void	Bureaucrat::dec()
{
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		grade++;
		std::cout << *this << std::endl;
	}
}

std::ostream &operator<<(std::ostream  &os, Bureaucrat const & obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}