#include <iostream>
#include <map>
#include <functional>

using std::cout;
using std::cin;


namespace basic {
	std::map<char, std::function<int(int, int)>> ops;
	void init() {
		ops['+'] = [](int a, int b) {
			return a+b;
		};
		ops['-'] = [](int a, int b) {
			return a-b;
		};
	}
}

namespace advanced {
	std::map<char, std::function<int(int, int)>> ops;

	void init() {
		ops['*'] = [](int a, int b) {
			return a*b;
		};
		ops['/'] = [](int a, int b) {
			return a/b;
		};
	}
}

int main() {
	basic::init();
	advanced::init();
	int num1, num2;
	char opr;

	cout << "Enter num1 opr num2 : ";
	cin >> num1 >> opr >> num2;

	if(basic::ops.count(opr)) cout << basic::ops[opr](num1, num2);
	else if(advanced::ops.count(opr)) cout << advanced::ops[opr](num1, num2);
	cout << "\n";

	return 0;
}
