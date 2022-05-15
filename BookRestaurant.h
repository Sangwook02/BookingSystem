#ifndef BOOKRESTAURANT_H
#define BOOKRESTAURANT_H
#include <iostream>
using namespace std;
#include <string>
#include <queue>


class BookRestaurant {
	queue<string>q;
	int date;
	int time;
	int month;

public:
	int Book();
	int WalkIn();
	void setTime();
	void setDate();
};

#endif
