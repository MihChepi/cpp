
#include "iter.hpp"

void	func_int_ref(int const &n)
{
	std::cout << n << std::endl;
}

void	func_char_ref(char const &ch)
{
	std::cout << ch << std::endl;
}

int main( void ) 
{
	int n[5] = {1, 2 ,3 ,4 ,5};
	char str[] = "string array";

	for (int i = 0; i < 5; i++)
		std::cout << n[i];
	std::cout << std::endl;
	::iter(n, 5, func_int_ref);
	std::cout << "----------------" << std::endl;
	std::cout << str << std::endl;
	::iter(str, std::strlen(str), func_char_ref);


	return 0;
}


/*
	exemple from check-list
*/

// class Awesome
// {
// 	public:
// 		Awesome(): _n(42) {}
// 		int	get() const { return _n; }
// 	private:
// 		int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awesome const & rhs)
// {
// 	o << rhs.get();
// 	return o;
// }
// template <typename T>
// void print_c(T const & x)
// {
// 	std::cout << x << std::endl;
// }

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter(tab, 5, print_c);
// 	iter(tab2, 5, print_c);
// 	return 0;
// }