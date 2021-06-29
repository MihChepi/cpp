#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <typeinfo>


template <class T>
class Array
{
private:
	int	len;
	T	*data;
public:
	Array()
	{
		data = nullptr;
		len = 0;
		std::cout << "Array created! type: " 
		<< typeid(T).name() << std::endl;;
	}
	
	Array(unsigned int n)
	{
		data = new T[len];
		len = n;
		std::cout << "Array created! type: " 
		<< typeid(T).name() << std::endl;;
	}

	~Array()
	{	
		if (len)
		{
			delete[] data;
			data = nullptr;
			len = 0;
		}
	}

	Array(Array const & cp)
	{
		len = cp.len;
		data = cp.data;
	}

	Array&		operator=(Array const & op)
	{
		if (this != & op)
		{
			len = op.len;
			data = op.data;
		}
		return *this;
	}

	class impossibleIndex : public  std::exception
	{
			virtual const char * what() const throw() {return "impossible";}
	};

	T&		operator[](unsigned int i)
	{
		if (i < 0)
			throw Array::impossibleIndex();
		else if (static_cast<unsigned int>(len) < i)
			throw Array::impossibleIndex();
		return (data[i]);
	}

	T const &		operator[](unsigned int i) const
	{
		if (i < 0)
			throw Array::impossibleIndex();
		else if (static_cast<unsigned int>(len) < i)
			throw Array::impossibleIndex();
		return (data[i]);
	}

	size_t	size()
	{
		return (len);
	}

};
 
#endif