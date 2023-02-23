#include <array>
#include <algorithm>
#include "../header/colours.hpp"

template<typename T>
void easyfind(T ints, int tofind)
{
	auto found {std::find(ints.begin(), ints.end(), tofind)};	

	return ;
}

int main(void)
{
	std::array<int, 6> ints = {1, 2, 3, 4, 5, 6};
	return (0);
}

