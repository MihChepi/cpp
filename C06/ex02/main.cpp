# include "Base.hpp"
# include "ABC.hpp"

Base * generate(void)
{
	int i;

	i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & r)
{

	try
	{
		A	&ref = dynamic_cast<A&>(r);
		static_cast<void>(ref);
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast& e)
	{}

	try
	{
		B	&ref = dynamic_cast<B&>(r);
		static_cast<void>(ref);
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast& e)
	{}

	try
	{
		C	&ref = dynamic_cast<C&>(r);
		static_cast<void>(ref);
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast& e)
	{}
}

int main()
{
	std::srand(time(0));
	Base	*base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);

	delete base;
}