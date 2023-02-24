#include "../header/MutantStack.class.hpp"
#include "../header/colours.hpp"
#include <iterator>
#include <list>

void	mutant_test(void);
void	list_test(void);

void	list_test(void)
{
	std::cout << RED << "LIST TEST" << DEF << std::endl;
	std::cout << CYAN << "Creating list object..." << DEF << std::endl;
	std::list<int>	testlist;
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	testlist.push_back(5);
	std::cout << YELLOW << "Pushing 17..." << DEF << std::endl;
	testlist.push_back(17);
	std::cout << CYAN << "Printing top..." << DEF << std::endl;
	std::cout << testlist.back() << std::endl;
	std::cout << YELLOW << "Popping..." << DEF << std::endl;
	testlist.pop_back();
	std::cout << CYAN << "Calculating size of testlist..." << DEF << std::endl;
	std::cout << testlist.size() << std::endl;
	std::cout << YELLOW << "Pushing 3..." << DEF << std::endl;
	testlist.push_back(3);
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	testlist.push_back(5);
	std::cout << YELLOW << "Pushing 737..." << DEF << std::endl;
	testlist.push_back(737);
	std::cout << YELLOW << "Pushing 0..." << DEF << std::endl;
	testlist.push_back(0);
	std::cout << CYAN << "Calculating size of testlist..." << DEF << std::endl;
	std::cout << testlist.size() << std::endl;
	std::cout << YELLOW << "Declaring iterators..." << DEF << std::endl;
	std::list<int>::iterator it = testlist.begin();
	std::list<int>::iterator ite = testlist.end();
	++it;
	--it;
	std::cout << CYAN << "Printing with iterator" << DEF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void mutant_test(void)
{
	std::cout << RED << "MUTANT STACK TEST" << DEF << std::endl;
	std::cout << CYAN << "Creating mstack object..." << DEF << std::endl;
	MutantStack<int>	mstack;
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	mstack.push(5);
	std::cout << YELLOW << "Pushing 17..." << DEF << std::endl;
	mstack.push(17);
	std::cout << CYAN << "Printing top..." << DEF << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << YELLOW << "Popping..." << DEF << std::endl;
	mstack.pop();
	std::cout << CYAN << "Calculating size of mstack..." << DEF << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << YELLOW << "Pushing 3..." << DEF << std::endl;
	mstack.push(3);
	std::cout << YELLOW << "Pushing 5..." << DEF << std::endl;
	mstack.push(5);
	std::cout << YELLOW << "Pushing 737..." << DEF << std::endl;
	mstack.push(737);
	std::cout << YELLOW << "Pushing 0..." << DEF << std::endl;
	mstack.push(0);
	std::cout << CYAN << "Calculating size of mstack..." << DEF << std::endl;
	std::cout << mstack.size() << std::endl;
	std::cout << YELLOW << "Declaring iterators..." << DEF << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << CYAN << "Printing with iterator" << DEF << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << CYAN << "Instantiating with copy constructor..." << DEF << std::endl;
	std::stack<int> s(mstack);
	std::cout << CYAN << "Calculating size of s..." << DEF << std::endl;
	std::cout << s.size() << std::endl;
	std::cout << YELLOW << "Popping from mstack..." << DEF << std::endl;
	mstack.pop();
	std::cout << CYAN << "Calculating size of s..." << DEF << std::endl;
	std::cout << s.size() << std::endl;
	std::cout << CYAN << "Calculating size of mstack..." << DEF << std::endl;
	std::cout << mstack.size() << std::endl;
	
}

int main(void)
{
	mutant_test();
	list_test();
	return (0);
}
