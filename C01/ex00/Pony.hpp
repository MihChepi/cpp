#ifndef POOL_C_PONY_HPP
# define POOL_C_PONY_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Pony
{

private:
		std::string name;
		std::string	color;
		int			age;
		int			tail_length;
        
public:
		Pony(std::string name, std::string color, int age, int tail_lenght);
		~Pony();

		void	setName(std::string name);
		void	setColor(std::string color);
		void	setAge(int age);
		void	setTailLength(int tail_lenght);

		std::string getName();
		std::string getColor();
		std::string getAge();
		std::string getTailLength();
};

#endif
