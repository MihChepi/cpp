#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = value * 1 << this->fr_bits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = (int)(roundf(value * (1 << this->fr_bits)));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& cp)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = cp.value;
}

Fixed &	Fixed::operator=(Fixed const& op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &op)
		this->value = op.value;
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

float	Fixed::toFloat( void ) const
{
	return (float)this->value / (1 << this->fr_bits);
}

int		Fixed::toInt( void ) const
{
	return this->value / (1 << this->fr_bits);
}

std::ostream & operator<<(std::ostream &o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}
