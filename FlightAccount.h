#ifndef FLIGHTACCOUNT_H
#define FLIGHTACCOUNT_H
#include "Account.h"
#include <iostream>
using namespace std;


class FlightAccount:public Account {
	int mileage;
public:
	FlightAccount();
	void addMileage();
	int Menu();
};
#endif