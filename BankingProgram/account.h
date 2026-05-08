#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
using namespace std;

struct acc {
    string name;
    long long contact;
    int age;
    string dob;
    string password;
    int balance;
};

acc createAcc();

#endif
