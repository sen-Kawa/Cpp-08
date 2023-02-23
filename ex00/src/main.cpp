#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
#include "../header/colours.hpp"

template<typename T>
void easyfind(T ints, int tofind)
{
	int found = std::find(ints.begin(), ints.end(), tofind);	
	if (found == ints.end())
		std::cout << RED << "Couldn't find " << tofind << DEF << std::endl;

	return ;
}

int main(void)
{
	std::vector<int> ints;
	std::vector<int>::iterator i;

	std::cout << YELLOW << "Declaring vector..." << DEF << std::endl;
	for (int j = 0; j < 7; j++)
		ints.push_back(j);

	std::cout << YELLOW << "Printing elements using iterators..." << DEF << std::endl;
	for (i = ints.begin(); i != ints.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl;
	return (0);
}

