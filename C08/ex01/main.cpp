
#include "span.hpp"

int main()
{
	Span	sp = Span(5);
	Span	cp(sp);
	Span	op = Span(3);
	op = sp;
	try
	{
		sp.addNumber(100);
		sp.addNumber(200);
		sp.addNumber(220);
		sp.addNumber(300);
		sp.addNumber(10);
	}
	catch (std::exception & e)
	{
			std::cerr << e.what() << std::endl;
	}
	op = sp;
	try
	{
		op.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "___________________PART 2____________________" << std::endl;
	std::srand(time(0));
	Span	ll = Span(10000);
	for (int i = 0; i < 10000; i++)
		ll.addNumber(rand());
	std::cout << ll.shortestSpan() << std::endl;
	std::cout << ll.longestSpan() << std::endl;

	std::cout << "___________________PART 3____________________" << std::endl;
	Span	w1 = Span (5);
	Span	w2 = Span (3);
	try
	{
		w1.addNumber(-10);
		w1.addNumber(20);
		w1.addNumber(0);

		w2.addNumber(3);
		w2.addNumber(0);
		w2.addNumber(-123);
	}
	catch (std::exception & e)
	{
			std::cerr << e.what() << std::endl;
	}
	std::cout << w1.shortestSpan() << std::endl;
	std::cout << w1.longestSpan() << std::endl;
	std::cout << w2.shortestSpan() << std::endl;
	std::cout << w2.longestSpan() << std::endl;

	return 0;
}