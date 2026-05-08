#include<iostream>
#include"handleInput.h"

int main() {
	using std::cout;

    bool logged = false;
    bool noAcc = true;
    bool running = true;

    acc user;

	while(running) {
		user = handle(logged, noAcc, user);
	}
	
    return 0;
}
