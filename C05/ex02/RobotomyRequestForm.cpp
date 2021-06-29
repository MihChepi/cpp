#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("", 1, 1)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & cp) : Form(cp)
{
			this->target = cp.target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & op)
{
	if (this != &op)
	{
		this->target = op.target;
		setSign(op.getSign());
	}
	return *this;
}

void		RobotomyRequestForm::execute(Bureaucrat const & br) const
{
	if (this->getGradeToExec() >= br.getGrade() && this->getSign())
	{
		std::cout << "Bureaucrat " << br.getName() << " say: \"BZZZ LLDDLDLLDLLD WEWEWEWEWEWE QQQQQQ "
		<< this->target << " has been robotomized successfully 50% of the time.\"" << std::endl;
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