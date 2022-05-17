#ifndef SEAT_H
#define SEAT_H

class Seat {
	bool available;
	int tableNumber;
	int sex; //여자1, 남자 2, 초기화 상태 0
	int id; //초기화 상태 -1
	int roomNumber; //초기화 상태 0
	static int setTableNumber;
public:
	Seat();
	void setCurrentUser();
	int getUserSex();
	void setSeat();
	bool Status();
};

#endif