#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <iostream>
#include "colours.hpp"

class Span
{
	private:


	public:

		int	getSpan(void) const;

		Span(void);
		Span(Span const &src);
		Span&	operator=(Span const &assign);
		~Span(void);
};

#endif

