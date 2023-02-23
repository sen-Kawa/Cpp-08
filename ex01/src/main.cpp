#include "../header/Span.class.hpp"
#include "../header/colours.hpp"
#include <exception>

int main(void)
{
	Span sp = Span(5);
	
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(12);
		sp.addNumber(1);
	}
	catch (const std::exception &e)
	{
		std::cout << RED << e.what() << DEF << std::endl;
	}
	sp.print(sp.getVector());
	std::cout << YELLOW << "Calculating shortest span" << DEF << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	return (0);
}

