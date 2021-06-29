#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = cp.getRawBits();
}

Fixed &	Fixed::operator=(Fixed const& op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &op)
		this->value = op.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	this->value = raw;
}