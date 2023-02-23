#include "../header/easyfind.hpp"

int main(void)
{
	std::vector<int> ints;
	std::vector<int>::iterator i;

	std::cout << YELLOW << "Declaring vector container..." << DEF << std::endl;
	for (int j = 0; j < 7; j++)
		ints.push_back(j);

	std::cout << YELLOW << "Printing elements using iterators..." << DEF << std::endl;
	for (i = ints.begin(); i != ints.end(); ++i)
		std::cout << *i << " ";
	std::cout << std::endl << std::endl;

	std::cout << YELLOW << "Calling easyfind..." << DEF << std::endl;
	easyfind(ints, 52);

	std::cout << YELLOW << "Calling easyfind..." << DEF << std::endl;
	easyfind(ints, 2);

	std::cout << YELLOW << "Calling easyfind..." << DEF << std::endl;
	easyfind(ints, -9);

	std::cout << YELLOW << "Calling easyfind..." << DEF << std::endl;
	easyfind(ints, 6);

	return (0);
}
