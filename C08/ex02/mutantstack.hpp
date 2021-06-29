#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public: 
		MutantStack() {}
		MutantStack(const MutantStack<T> &cp) : std::stack<T>(cp) {}
		virtual ~MutantStack() {}
		MutantStack<T> &operator=(const MutantStack<T> &op)
		{
			if (this != &op)
				std::stack<T>::operator=(op);
			return (*this);
		}
		MutantStack(unsigned int n)
		{
			while(n--)
			{
				this->push(T());
			}
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator	begin();
		iterator	end();
};

template <typename T>
typename MutantStack< T >::iterator		MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator		MutantStack<T>::end()
{
	return this->c.end();
}

#endif