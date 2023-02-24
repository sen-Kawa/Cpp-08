#include "../header/MutantStack.class.hpp"
#include "../header/colours.hpp"

int main(void)
{

	MutantStack<int>	mstack;
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	mstack.push(5);
	std::cout << YELLOW << "Pushing 17..." << DEF << std::endl;
	mstack.push(17);
	std::cout << CYAN << "Printing top..." << DEF << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << YELLOW << "Popping..." << DEF << std::endl;
	mstack.pop();
	std::cout << CYAN << "Calculating size..." << DEF << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << YELLOW << "Pushing 3..." << DEF << std::endl;
	mstack.push(3);
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	mstack.push(5);
	std::cout << YELLOW << "Pushing 737..." << DEF << std::endl;
	mstack.push(737);
	//[...]
	std::cout << YELLOW << "Pushing 0..." << DEF << std::endl;
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << CYAN << "Before modify" << DEF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	++it;
	--it;
	std::cout << CYAN << "After modify" << DEF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}

