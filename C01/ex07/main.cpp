
#include "replace.hpp"

int replace(char *file, char *s1, char *s2)
{
	std::fstream			F;
	std::ofstream 			out;
	std::string				str;
	std::size_t				found;

	F.open(file);
	if (!F)
		return (1);
	out.open(std::string(file) + ".replace");
	if (!out)
		return (1);
	if (!std::strlen(s1))
		return (0);
	while (!F.eof())
	{
		found = 0;
		std::getline(F, str);
		while((found = str.find(s1, found)) != std::string::npos)
		{
			str.replace(found, std::strlen(s1),  s2);
			found += std::strlen(s2);
		}
		if (!F.eof())
			out << str << std::endl;
		else if (F.eof())
			out << str;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (replace(argv[1], argv[2], argv[3]))
		{
			std::cout << "Error!" << std::endl;
			return (1);
		}
	}
	else
		std::cout << "Wrong number of arguments!" << std::endl;
	return (0);
}
