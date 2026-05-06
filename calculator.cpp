#include <iostream>

int main() {
	int num1, num2;
	char opr;

	using std::cout;
	using std::cin;

	cout << "Num1 Operator Num2 : "; 
	cin >> num1 >> opr >> num2;

	switch(opr) {
		case '+':
			cout << num1 + num2;
			break;
		case '-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case '/':
			if (num2 != 0)
				cout << num1 / num2;
			else 
				cout << " Can't divide by zero!\n";
			break;
		default:
			cout << "Invalid operation!\n";
			break;
	}
	cout << "\n";
	return 0;
}
