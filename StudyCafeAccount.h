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
	int currentUserSex;
	int numberOfBooking;
	int time[7] = { 0, };
public:
	int Menu();
	void set();
	int login();
	void addUserID();
	int getID();
	int getSex();
	void setCurrentUserSex(int sex);
	int getCurrentUserSex();
	void addTime(int date, int hour);
};

#endif