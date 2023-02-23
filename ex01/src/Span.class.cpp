#include "../header/Span.class.hpp"
#include <algorithm>

void Span::addNumber(const int n)
{
	if (ints.size() >= maxInts)
		throw Span::VectorFullException();
	ints.push_back(n);
	return ;
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
	return (*this);
}

Span::~Span(void)
{
	return ;
}
