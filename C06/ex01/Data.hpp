#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <sstream>

class Data
{
	private:
		std::string	s1;
		std::string	s2;
		int			i;
	public:
		Data();
		~Data();
		Data(Data const & cp);
		Data	&operator=(Data const & op);

		Data	*deserialize(void *raw);
		void	print(void);
};

#endif