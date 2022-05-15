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
	string currentUserID;
public:
	Account();
	void setUser();
	int login();
	void show();
	string getID();
	string getCurrentUser();
	void setCurrentUser(string id);
};

#endif
