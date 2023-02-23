#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include "../header/colours.hpp"

template<typename T>
void easyfind(T &ints, const int tofind)
{
	std::cout << YELLOW << "easyfind called with value to find of " << tofind << DEF << std::endl;

	std::cout << YELLOW << "Searching with find algorithm..." << DEF << std::endl;
	typename T::iterator	found = std::find(ints.begin(), ints.end(), tofind);	

	if (found == ints.end())
		std::cout << RED << "Couldn't find " << tofind << DEF << std::endl;
	else
		std::cout << CYAN << "Success!" << DEF << std::endl;
	std::cout << std::endl;

	return ;
}

#endif
