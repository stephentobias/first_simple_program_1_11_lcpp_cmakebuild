#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int user_input;
	std::cin >> user_input;

	std::cout << "Double that integer is: " << user_input * 2 << '\n';
	return 0;
}
