#ifndef AIRPORT_H
#define AIRPORT_H
#include <iostream>
using namespace std;


class Airport {
	string name;
	string code; // 공항의 식별코드를 대문자로 표현하여 이후 항공편의 식별코드를 만들 때 사용.
public:
	Airport();
	string getName();
	string getCode();
};

#endif 