#include "../header/Span.class.hpp"
#include "../header/colours.hpp"
#include <exception>

int main(void)
{
	Span sp = Span(5);

	try
	{
		std::cout << CYAN << ">> TEST 1\n" << DEF << std::endl;
		sp.addNumber(6);
		std::cout << YELLOW << "Calculating shortest span..." << DEF << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << std::endl;
	
	try
	{
		std::cout << CYAN << ">> TEST 2\n" << DEF << std::endl;
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
		sp.addNumber(1);
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << std::endl;

	try
	{
		std::cout << CYAN << ">> TEST 3\n" << DEF << std::endl;
		std::cout << YELLOW << "Calculating shortest span..." << DEF << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << YELLOW << "Calculating longest span..." << DEF << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	std::cout << std::endl;

	return (0);
}

