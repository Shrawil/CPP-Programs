#include <iostream>

int main() {
	// Lambdas are annonymous functions
	// [capture](parameters){function body};

	int x = 10;
	int y = 20;

	// Non mutable lambda function (Captured variables can't be modified).
	// Returns an integer.
	// Captures value of 2 variables.
	// Take 1 parameters as input.
	auto sum = [x, y](char opr) -> int {
		//x = 20; This line would throw error.
		return x+y;
	};
	
	int res = sum('+'); 
	std::cout << "\nRes = " << res << "\n";

	auto incrementSum = [x, y](int num) mutable -> int {
		x += num;
		y += num;
		return x + y;
	};

	res = incrementSum(10); 
	std::cout << "\nRes = " << res << "\n";
	return 0;
}
