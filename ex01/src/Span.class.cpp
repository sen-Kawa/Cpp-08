#include "../header/Span.class.hpp"
#include <algorithm>
#include <cstdlib>
#include <numeric>
#include <valarray>
#include <vector>
#include <time.h>

std::vector<int> Span::getVector() const
{
	return (ints);
}

void Span::addNumber(const int n)
{
	std::cout << YELLOW << "Adding " << n << DEF << std::endl;
	if (ints.size() >= maxInts)
		throw Span::VectorFullException();
	ints.push_back(n);
	std::cout << CYAN << "Added!" << DEF << std::endl;
	return ;
}

void Span::autoFill()
{
	std::cout << YELLOW << "Filling... " << DEF << std::endl;
	std::srand(time(NULL));
	for (unsigned int i = 0; i < maxInts; i++)
		ints.push_back(rand() % 100);
	std::cout << CYAN << "Filled!" << DEF << std::endl;
	std::cout << "Size of vector is: " << ints.size() << std::endl;
	return ;
}

int Span::shortestSpan() const
{
	std::cout << YELLOW << "Calculating shortest span..." << DEF << std::endl;

	if (ints.size() < 2)
		throw Span::NoSpanFoundException();

	int result[ints.size()];

	std::adjacent_difference(ints.begin(), ints.end(), result);
	std::valarray<int> res(result + 1, ints.size() - 1);
	std::valarray<int> abs_result = abs(res);

	return (abs_result.min());
}

int Span::longestSpan() const
{
	std::cout << YELLOW << "Calculating longest span..." << DEF << std::endl;

	if (ints.size() < 2)
		throw Span::NoSpanFoundException();

	int result[ints.size()];

	std::adjacent_difference(ints.begin(), ints.end(), result);
	std::valarray<int> res(result + 1, ints.size() - 1);
	std::valarray<int> abs_result = abs(res);

	return (abs_result.max());
}


Span::Span(void) : maxInts(0)
{
	return ;
}

Span::Span(const unsigned int n) : maxInts(n)
{
	return ;
}

Span::Span(Span const &src) : maxInts(src.maxInts)
{
	*this = src;
	return ;
}

Span &	Span::operator=(const Span &assign)
{
	(void) assign;
	return (*this);
}

Span::~Span(void)
{
	ints.clear();
	return ;
}
