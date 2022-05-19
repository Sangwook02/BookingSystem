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
	Seat s[98][17][17];
public:
	BookStudyCafe();
	void setDate();
	void setTime();
	int Book(int s);
	int take(int part, int a, int b, int sex);
};

#endif