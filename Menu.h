#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "FlightAccount.h"
#include "RestaurantAccount.h"


class Menu {
	FlightAccount* user;
	int flightSize;

	RestaurantAccount* ruser;
	int restaurantSize;
public:
	Menu();
	~Menu();
	void getMenu();
};
#endif