#include "../header/Span.class.hpp"
#include "../header/colours.hpp"
#include <exception>
#include <string>

void test1(void)
{
	std::cout << CYAN << ">> TEST 1\n" << DEF << std::endl;
	Span sp = Span(2);

	try
	{
		sp.addNumber(680);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << std::endl;

	return ;
}

void test2(void)
{
	std::cout << CYAN << ">> TEST 2\n" << DEF << std::endl;
	Span sp = Span(7);
	std::cout << "Max elements: 7\n" << std::endl;

	try
	{
		sp.addNumber(2);
		sp.addNumber(9);
		sp.addNumber(7);
		sp.addNumber(6);
		sp.addNumber(14);
		sp.addNumber(12);
		sp.addNumber(1);
		sp.addNumber(24);
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << std::endl;

	return ;
}

void test3(void)
{
	std::cout << CYAN << ">> TEST 3\n" << DEF << std::endl;
	Span sp = Span(5);
	std::cout << "Max elements: 5\n" << std::endl;

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << RED << "Exception arose: " << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << std::endl;

	return ;
}

void test4(void)
{
	std::cout << CYAN << ">> TEST 4\n" << DEF << std::endl;

	Span spp = Span(12000);

	spp.autoFill();
	std::cout << YELLOW << "To print contents enter print" << DEF << std::endl;
	std::string input;
	std::getline(std::cin, input);
	if (input == "print")
		spp.print(spp.getVector());

	return ;
}
