#include "phonebook.hpp"

std::string	trim_contact(std::string str)
{
	str = str.substr(0, 10);
	str[9] = '.';
	return (str);
}
