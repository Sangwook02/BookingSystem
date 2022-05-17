#ifndef BOOKSTUDYCAFE_H
#define BOOKSTUDYCAFE_H
#include <iostream>
#include <string>
#include "Seat.h"
using namespace std;

class BookStudyCafe {
	int date;
	int time[14] = { 0,};	//time 오전9시index = 0, 오전10시index = 1 ....
	//선택한 index에 1삽입. 
	Seat s[98][225];
public:
	void setDate();
	void setTime();
	int Book();
};

#endif