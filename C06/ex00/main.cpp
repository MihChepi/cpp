#include <string>
#include <iostream>
#include <iomanip> 

int		convert_to(char *arg)
{
	bool	is_num;
	char	ch;
	int	i;
	float	f;
	double	d;


	is_num = 0;
	try
	{	
		if (std::strlen(arg) == 1 && (arg[0] <= '0' || arg[0] >= '9'))
			ch = static_cast<char>(arg[0]);
		else
		{
			is_num = 1;
			d = std::stod(arg);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: impossible" << std::endl
		<< "double: impossible" << std::endl;
		return (1);
	}

	if (is_num)
	{
		try
		{
			if (d >= 33 && d <= 127)
				ch = static_cast<char>(d);
			else if (d < 0 || d >= 129)
				throw std::string("impossible");
			else
				throw std::string("Non displayable");
			std::cout << "char: " << ch << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "char: "<< e << std::endl;
		}
		
		try
		{

			if (d > 2147483647 || d < -2147483648 || std::strncmp("nan", arg, 3) == 0)
				throw std::string("impossible");
			i = static_cast<int>(d);
			std::cout << "int: " << i << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "int: "<< e << std::endl;
		}
		
		try
		{
			f = static_cast<float>(d);
			if (f - static_cast<int>(f) != 0.f)
				std::cout << "float: " << f << "f" << std::endl;
			else
				std::cout << "float: " << f << ".0f" << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "float: "<< e << std::endl;
		}
		
		try
		{
			d = static_cast<double>(d);
			if (d - static_cast<int>(d) != 0.f)
				std::cout << "double: " << d << std::endl;
			else
				std::cout << "double: " << d << ".0" << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "double: "<< e << std::endl;
		}
	}
	else
	{
		try
		{
			ch = static_cast<char>(ch);
			std::cout << "char: " << ch << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "char: "<< e << std::endl;
		}
		try
		{
			i =static_cast<int>(ch);
			std::cout << "int: " << i << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "int: "<< e << std::endl;
		}
		
		
		try
		{
			f = static_cast<float>(ch);
			std::cout << "float: " << f << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "float: "<< e << std::endl;
		}
		
		
		try
		{
			d = static_cast<double>(ch);
			std::cout << "double: " << d << std::endl;
		}
		catch(const std::string & e)
		{
			std::cerr << "double: "<< e << std::endl;
		}
	}


	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		convert_to(argv[1]);
	}
	return 0;
}
