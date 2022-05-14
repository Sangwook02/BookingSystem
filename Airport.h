#ifndef AIRPORT_H
#define AIRPORT_H
#include <iostream>
using namespace std;
#include "Day.h"

class Airport {
	Day* p = new Day[7];
	string code; // 공항의 식별코드를 대문자로 표현하여 이후 항공편의 식별코드를 만들 때 사용.
public:
	Airport(string code);
	string getCode();
};

#endif 