#ifndef STUDYCAFEACCOUNT_H
#define STUDYCAFEACCOUNT_H
#include <iostream>
using namespace std;
#include <map>

class StudyCafeAccount {
	static int userID;
	int age;
	int sex;//남자 0, 여자 1
	static map<int, string> user;
	int roomNumber;
	int id;
	int numberOfBooking;
public:
	int Menu();
	void set();
	int login();
	void addUserID();
};

#endif