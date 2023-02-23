#include <array>
#include <iostream>
#include <algorithm>
#include "../header/colours.hpp"

template<typename T>
void easyfind(T ints, int tofind)
{
	auto found {std::find(ints.begin(), ints.end(), tofind)};	
	if (found == ints.end())
		std::cout << RED << "Couldn't find " << tofind << DEF << std::endl;

	return ;
}

int main(void)
{
	std::array<int, 6> ints = {1, 2, 3, 4, 5, 6};
	for (int i : ints)
		std::cout << i << " ";
	return (0);
}

