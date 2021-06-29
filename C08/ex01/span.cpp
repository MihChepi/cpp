
#include "span.hpp"

Span::Span()
{
	_len = 0;
}

Span::~Span()
{
	_data.clear();
}

Span::Span(Span const & cp)
{
	_data = cp._data;
	_len = cp._len;
}

Span & Span::operator=(Span const & op)
{
	if (this != &op)
	{
		_data.clear();
		_data = op._data;
		_len= op._len;
	}
	return *this;
}

Span::Span(unsigned int n)
{
	_len = n;
}

void	Span::addNumber(unsigned int n)
{
	if (_data.size() < _len)
		_data.push_back(n);
	else
		throw Span::MaxSize();
}

int		Span::longestSpan()
{
	if(_len <= 1)
		throw std::exception();
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;
	min = std::min_element(_data.begin(), _data.end());
	max = std::max_element(_data.begin(), _data.end());
	int diff = (*max) - (*min);
	return (diff);
}

int		Span::shortestSpan()
{
	if(_len <= 1)
		throw std::exception();
	std::vector<int> tmp;
	tmp = _data;
	std::sort(tmp.begin(), tmp.end());
	int diff = tmp[1] - tmp[0];
	for(size_t i = 0; i < tmp.size() - 1; i++)
	{
		if (diff > tmp[i + 1] - tmp[i])
			diff = tmp[i + 1] - tmp[i]; 
	}
	tmp.clear();
	return (diff);
}

const char * Span::MaxSize::what() const throw()
{
	return "Error: max size";
}