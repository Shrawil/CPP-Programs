#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>

using std::cout;
using std::cin;

void play(std::vector<int>& guesses) {
	int guess;
	int num = rand() % 101;
	while(true) {
		cout << "Enter your guess [1 - 100] : ";
		cin >> guess;

		guesses.push_back(guess);

		if(guess == num) {
			cout << "You win!\n";
			break;
		} else if (guess < num) {
			cout << "Go higher!\n";
		} else {
			cout << "Go lower!\n";
		}
	}
}

int main() {
	int choice;
	std::vector<int> guesses;
	srand(time(NULL));

	while(true) {
		cout << "[1] Play [2] Exit : ";
		cin >> choice;
		if (choice == 1) play(guesses);
		else if (choice == 2) break;
		cout << "Thanks for playing!\n";
		cout << "Your guesses : ";
		for(int g : guesses) {
			cout << g << " ";
		}
		cout << "\n";
	}
	return 0;
}
