#ifndef BOOKRESTAURANT_H
#define BOOKRESTAURANT_H
#include <iostream>
using namespace std;
#include <string>
#include <queue>
#include "Account.h"


class BookRestaurant {
	queue<string>four_q;
	queue<string>six_q;
	int date;
	int time;
	int month;

public:
	int Book();
	int WalkIn(string id);
	void setTime();
	void setDate();
	int getFour_q_size();
};

#endif
