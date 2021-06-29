#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_data;
		size_t				_len;
		Span();
	public:
		~Span();
		Span(Span const & cp);
		Span & operator=(Span const & op);
		Span(unsigned int n);
		void	addNumber(unsigned int n);
		int		longestSpan();
		int		shortestSpan();
		class MaxSize : public  std::exception
		{
			virtual const char * what() const throw ();
		};
};

#endif