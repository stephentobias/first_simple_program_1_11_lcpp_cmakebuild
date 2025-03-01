#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";

	int user_input{ };
	std::cin >> user_input;

	std::cout << "Double " << user_input << " is: " << user_input * 2 << '\n';
	std::cout << "Triple " << user_input << " is: " << user_input * 3 << '\n';
	return 0;
}
