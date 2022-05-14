#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
using namespace std;

class Flight {
	string seat[3][3] = { {"NO","---","---"},{"---","---","---"},{"---","---","---" } }; //index기준 [0][1]이랑 [0][2]가 비즈니스 클래스
	int leftSeat[9] = { 0, };
public:
	Flight();
	void showLeftSeat();
};
#endif