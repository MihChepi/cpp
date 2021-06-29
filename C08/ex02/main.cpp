
#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "_______________PART 2_________________" << std::endl;
	MutantStack<int> st1(3);
	MutantStack<int> st2(4);
	MutantStack<int>::iterator itst1 = st1.begin();
	*itst1 = 1;
	itst1++;
	*itst1 = 2;
	itst1++;
	*itst1 = 3;
	std::cout << *itst1 << std::endl;

	std::cout << st2.top() << std::endl;
	st2 = st1;
	std::cout << st2.top() << std::endl;

	std::cout << "_______________PART 3_________________" << std::endl;
	MutantStack<int> op(20);
	MutantStack<int> cp(op);
	op = st1;
	std::cout << "op size = " << op.size() << std::endl;
	std::cout << "cp size = " << cp.size() << std::endl;

	std::cout << "_______________PART 4_________________" << std::endl;
	MutantStack<char> ch(10000);
	std::cout << "ch size = " << ch.size() << std::endl;
	MutantStack<std::string> strs(0);
	std::cout << "ch size = " << strs.size() << std::endl;
	return 0;
}
