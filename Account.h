#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
#include <map>
using namespace std;

class Account {
	map<string, string> user;
	string name;
	string id;
	int numberOfBooking;
public:
	Account();
	void setUser();
	int login();
	void show();
	string getID();
};

#endif
