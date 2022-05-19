#include "Flight.h"

Flight::Flight() {
	for (int i = 0; i < 9; i++) {
		this->status[i] = 0;
	}
}
void Flight::setStatus(int idx) {
	if (this->status[idx] == 0) {
		this->status[idx] = 1;
	}
	else {
		this->status[idx] = 0;
	}
}


void Flight::showSeat() {
	cout << "\t\t\t앞\n\n";
	cout << "\t\t";

	cout << "1\t\t";

	cout << "2\n";
	

	cout << "\n\t";

	for (int i = 3; i <= 5; i++) {
		cout << i << "\t\t ";
		
	}
	cout << "\n\n\t";
	for (int i = 6; i <= 8; i++) {
		cout << i << "\t\t ";
		
	}
	cout << "\n\n\t\t\t뒤\n";
}


int Flight::getStatus(int idx) {
	return this->status[idx];
}
void Flight::showLeftSeat() {

	cout << "***현재 잔여 좌석입니다.***\n\n";
	cout << "\t\t\t앞\n\n";
	cout << "\t\t";

	if (status[1] == 1) {
		cout << "\t\t";
	}
	else if (status[1] == 0) {
		cout <<"1\t\t";
	}

	if (status[2] == 1) {
		cout << "\n";
	}
	else if (status[2] == 0) {
		cout << "2\n";
	}

	cout << "\n\t";

	for (int i = 3; i <= 5; i++) {
		if (status[i] == 1) {
			cout << "\t\t ";
		}
		else if (status[i] == 0) {
			cout << i<< "\t\t ";
		}
	}
	cout << "\n\n\t";
	for (int i = 6; i <= 8; i++) {
		if (status[i] == 1) {
			cout << "\t\t ";
		}
		else if (status[i] == 0) {
			cout << i<<  "\t\t ";
		}
	}
	cout << "\n\n\t\t\t뒤\n";
}