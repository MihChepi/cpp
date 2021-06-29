#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T cont, int n)
{
	typename T::iterator iter;
	
	iter = std::find(cont.begin(), cont.end(), n);
	if (iter == cont.end())
		throw std::exception();
	return (iter);
}

#endif