#ifndef HANDLEINPUT_H
#define HANDLEINPUT_H

#include<iostream>
#include<cstdlib>
#include"account.h"

acc handle(bool& loggedIn, bool &noAcc, acc& user) {

	using std::cout;
	using std::cin;
	using std::string;

    int choice;

    if(!loggedIn and noAcc) {
        cout << "[1] Create Account\n[2] Exit\nEnter your choice : ";
        cin >> choice;
        if(choice == 1) {
        	noAcc = false;
            return createAcc();
        }
        else if(choice == 2) {
        	exit(0);
        }
    }
    else if(!loggedIn and !noAcc) {
    	string name, pass;
    	cout << "[1] Login\n[2] Exit\nEnter your choice : ";
    	cin >> choice;
    	if(choice == 1) {
    		cout << "Enter your name : ";
    		cin >> name;
    		cout << "Enter your password : ";
    		cin >> pass;
    		if(name == user.name and pass == user.password) {
    			loggedIn = true;
    			cout << "Logged-In Successfully!\n";
    			return user;
    		}
    		else {
    			cout << "Invalid username or password!\n";
    			return user;
    		}
    	}
    	else if(choice == 2) {
    		exit(0);
    	}
    }
    else if(loggedIn and !noAcc) {
    	int choice;
    	cout << "[1] Check Balance\n[2] Deposit Money \n[3] Transfer Money\n[4] Exit\nEnter your choice : ";
    	cin >> choice;
    	if(choice == 1) {
    		cout << "Available Balance : " << user.balance << "Rs\n";
    		return user;
    	}
    	else if(choice == 2) {
    		int amnt;
    		cout << "Enter an amount to Deposit : ";
    		cin >> amnt;
    		if(amnt > 0)
    			user.balance += amnt;
    		else
    			cout << "Deposit amount can't be smaller than 1!\n";
    		return user;
    	}
    	else if(choice == 3) {
    		int amnt;
    		cout << "Enter an amount to transfer : ";
    		cin >> amnt;
    		if(amnt > 0 and amnt <= user.balance) {
    			user.balance -= amnt;
    		}
    		else {
    			cout << "Transfer amount can not be smaller than 0 or greater than your current balance!\n";
    		}
    		return user;
    	}
    	else if(choice == 4) {
    		exit(0);
    	}
    }

    acc emptyAcc;
    return emptyAcc;
}

acc createAcc() {
    acc newAcc;

    cout << "Enter your name : ";
    cin >> newAcc.name;
    cout << "Enter your phone number : ";
    cin >> newAcc.contact;
    cout << "Enter your age : ";
    cin >> newAcc.age;
    cout << "Enter your dob [DD-MM-YYYY] : ";
    cin >> newAcc.dob;
    cout << "Create a password : ";
    cin >> newAcc.password;
    cout << "Account created!\n";
    newAcc.balance = 0;

    return newAcc;
}

#endif
