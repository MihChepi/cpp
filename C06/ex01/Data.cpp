#include "Data.hpp"
#include <unistd.h>

Data::Data()
{}

Data::~Data()
{}

Data::Data(Data const & cp)
{
	s1 = cp.s1;
	s2 = cp.s2;
	i = cp.i;
}

Data	&Data::operator=(Data const & op)
{
	if (this != &op)
	{
		s1 = op.s1;
		s2 = op.s2;
		i = op.i;
	}
	return *this;
}

Data	*Data::deserialize(void *raw)
{
	char		*tmp;

	tmp = static_cast<char*>(raw);

	this->s1 = *(reinterpret_cast<std::string *>(tmp));
	this->i = *(reinterpret_cast<int*>(&tmp[25]));
	this->s2 = *(reinterpret_cast<std::string *>(&tmp[29]));

	return this;
}

void	Data::print(void)
{
	std::cout << this->s1  << std::endl;
	std::cout << this->i  << std::endl;
	std::cout << this->s2  << std::endl;
	
}