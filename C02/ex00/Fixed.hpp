#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fr_bits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const& cp);
	Fixed &	operator=(Fixed const& op);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
