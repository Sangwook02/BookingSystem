#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "FlightAccount.h"
class Menu {
	FlightAccount* user;
	int flightSize;
public:
	Menu();
	~Menu();
	void getMenu();
};
#endif