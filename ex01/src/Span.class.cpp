#include "../header/Span.class.hpp"
#include <algorithm>
#include <numeric>
#include <valarray>
#include <vector>

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
	return ;
}

int Span::shortestSpan() const
{
	if (ints.size() < 2)
		throw Span::NoSpanFoundException();

	int result[ints.size()];

	std::adjacent_difference(ints.begin(), ints.end(), result);
	std::valarray<int> res(result + 1, ints.size() - 1);
	std::valarray<int> abs_result = abs(res);

	return (abs_result.min());
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
