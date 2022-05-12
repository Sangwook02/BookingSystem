#ifndef BOOKFLIGHT_H
#define BOOKFLIGHT_H
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class BookFlight {
	int onewayOrRound; //왕복이면 0, 편도면 1
	int date;
	int time;
	int month;
	string departure;
	string arrival;
	string flightCode;
public:
	void setOnewayOrRound();
	void setTime();
	void setDate();
	void setWhereToWhere();
	void Book();
	void getFlightCode();
};

#endif