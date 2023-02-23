#include "../header/Span.class.hpp"

void Span::addNumber(const int n)
{
	ints.push_back(n);
	return ;
}

Span::Span(void) : maxInts(0)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;
	return ;
}

Span &	Span::operator=(const Span &assign)
{
	this->number = assign.getSpan();
	return (*this);
}

Span::~Span(void)
{
	return ;
}

