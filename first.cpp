#include <iostream>

int main() {

	int x; // Declaration
	x = 10; // Initialization
	std::cout << x << " is an integer!\n";

	float y = 10.101;
	std::cout << y << " is a float!\n";

	char z = 'A';
	std::cout << z << " is a character!\n";

	std::string name = "Ninjazz";
	std::cout << name << " is a string!\n";

	const int daysInWeeks = 7;
	std::cout << daysInWeeks << " is a constant!\n";

	return 0;
}
