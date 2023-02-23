#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "colours.hpp"

class Span
{
	private:

		const unsigned int	maxInts;
		std::vector<int>	ints;

	public:

		void	addNumber(const int n);
		int		shortestSpan(void) const;
		void	longestSpan(void) const;

		template<typename T>
		void	print(T toPrint) const;

		Span(void);
		Span(const unsigned int);
		Span(Span const &src);
		Span&	operator=(Span const &assign);
		~Span(void);

		class VectorFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Vector is full.");
				}	
		};

		class NoSpanFoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("No span can be found.");
				}	
		};
};

template<typename T>
void	Span::print(T toPrint) const
{
	for (long unsigned int i = 0; i < ints.size(); i++)
		std::cout << toPrint[i] << " ";
	std::cout << std::endl;
	return ;	
}

#endif
