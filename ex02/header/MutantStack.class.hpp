#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <iostream>
#include <stack>
#include "colours.hpp"

template<typename T>
class MutantStack : public std::stack<T>
{
	private:


	public:

		int	getMutantStack(void) const;

		MutantStack(void);
		MutantStack(MutantStack const &src);
		MutantStack&	operator=(MutantStack const &assign);
		~MutantStack(void);
};

#endif

