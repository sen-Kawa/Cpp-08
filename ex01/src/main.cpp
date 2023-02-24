#include "../header/Span.class.hpp"
#include "../header/colours.hpp"
#include <exception>
#include <string>

void test1(void);
void test2(void);
void test3(void);
void test4(void);

int main(void)
{
	std::string	input;

	std::cout << CYAN << "SPAN TESTER\n" << DEF << std::endl;
	std::cout << "Enter 'run' to start running" << std::endl;
	std::getline(std::cin, input);
	if (input == "run")
		test1();
	std::cout << "Enter 'c' to continue running" << std::endl;
	std::getline(std::cin, input);
	if (input == "c")
		test2();
	std::getline(std::cin, input);
	if (input == "c")
		test3();
	std::getline(std::cin, input);
	if (input == "c")
		test4();
	return (0);
}
