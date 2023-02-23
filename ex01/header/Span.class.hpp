#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <iostream>
#include <vector>
#include "colours.hpp"

class Span
{
	private:

		const unsigned int	maxInts;
		std::vector<int>	ints;

	public:

		void	addNumber(int n);
		void	shortestSpan(void) const;
		void	longestSpan(void) const;

		Span(void);
		Span(const unsigned int);
		Span(Span const &src);
		Span&	operator=(Span const &assign);
		~Span(void);
};

#endif

