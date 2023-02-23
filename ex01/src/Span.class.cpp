#include "../header/Span.class.hpp"
#include <algorithm>
#include <numeric>
#include <valarray>

void Span::addNumber(const int n)
{
	if (ints.size() >= maxInts)
		throw Span::VectorFullException();
	ints.push_back(n);
	std::cout << "All vector elements:" << std::endl;
	print(ints);
	return ;
}

int* Span::shortestSpan() const
{
	if (ints.size() < 2)
		throw Span::NoSpanFoundException();

	int result[ints.size()];
//	int abs_result[ints.size()];
	int *shortest;

	std::adjacent_difference(ints.begin(), ints.end(), result);
	std::cout << "Adjacent difference:" << std::endl;
	print(result);

	shortest = std::min_element(result, result + ints.size());
	std::cout << *shortest << std::endl;
	
	return (shortest);
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
