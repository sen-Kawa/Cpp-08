#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <iostream>
#include <stack>
#include "colours.hpp"

template<typename T>
class MutantStack : public std::stack<T>
{
	public:

		MutantStack(void);
		MutantStack(MutantStack const &src);
		MutantStack&	operator=(MutantStack const &assign);
		virtual ~MutantStack(void);

		typedef typename std::stack<T>::container_type::iterator				iterator;
		typedef typename std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

		iterator begin(void)
		{
			return (this->c.begin());
		}
		iterator end(void)
		{
			return (this->c.end());
		}
		const_iterator begin(void) const
		{
			return (this->c.begin());
		}
		const_iterator end(void) const
		{
			return (this->c.end());
		}
		reverse_iterator rbegin(void)
		{
			return (this->c.rbegin());
		}
		reverse_iterator rend(void)
		{
			return (this->c.rend());
		}
		const_reverse_iterator rbegin(void) const
		{
			return (this->c.rbegin());
		}
		const_reverse_iterator	rend(void) const
		{
			return (this->c.rend());
		}
};

#include "MutantStack.class.tpp"

#endif
