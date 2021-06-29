#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("", 1, 1)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & cp) : Form(cp)
{
		this->target = cp.target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & op)
{
	if (this != &op)
	{
		this->target = op.target;
		setSign(op.getSign());
	}
	return *this;
}

void		PresidentialPardonForm::execute(Bureaucrat const & br) const
{
	if (this->getGradeToExec() >= br.getGrade() && this->getSign())
	{
		std::cout << "Bureaucrat " << br.getName() << " say: \"" 
		<< this->target << " has been pardoned by Zafod Beeblebrox.\"" << std::endl;
	}
	else if (!this->getSign())
	{
		throw Form::FormUnsigned();
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}
