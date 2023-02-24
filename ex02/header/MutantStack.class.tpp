#include "MutantStack.class.hpp"

template<typename T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src)
{
	*this = src;
	return ;
}

template<typename T>
MutantStack<T> &	MutantStack<T>::operator=(const MutantStack<T> &assign)
{
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}
