#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("", 1, 1)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & cp) : Form(cp)
{
		this->target = cp.target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & op)
{
	if (this != &op)
	{
		this->target = op.target;
		setSign(op.getSign());
	}
	return *this;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & br) const
{

	if (this->getGradeToExec() >= br.getGrade() && this->getSign())
	{
		std::cout << "Bureaucrat " << br.getName() << " create file " 
									<< this->target << std::endl;
	std::ofstream	out;
	out.open(target);
	if (!out)
	{
		std::cout << "file didn't created!" << std::endl;
		return ;
	}
 	out << std::endl <<
		"   oxoxoo    ooxoo" << std::endl << 
		" ooxoxo oo  oxoxooo " << std::endl << 
		" oooo xxoxoo ooo ooox " << std::endl << 
		" oxo o oxoxo  xoxxoxo " << std::endl << 
		"  oxo xooxoooo o ooo " << std::endl << 
		"    ooo\\oo\\  /o/o" << std::endl << 
		"        \\  \\// " << std::endl << 
		"         |   / " << std::endl << 
		"         |  | " << std::endl << 
		"         | D| " << std::endl << 
		"         |  | " << std::endl << 
		"         |  | "<< std::endl <<
		" ______/____\\____    " << std::endl;
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
