#include "Flight.h"

Flight::Flight() {

}
void Flight::showLeftSeat() {

	cout << "***현재 잔여 좌석입니다.***\n\n";
	cout << "\t\t\t앞\n\n";
	cout << "\t\t";
	if (leftSeat[1] == 1) {
		cout << "X\t\t";
	}
	else if (leftSeat[1] == 0) {
		cout << "O\t\t";
	}
	if (leftSeat[2] == 1) {
		cout << "X\n";
	}
	else if (leftSeat[2] == 0) {
		cout << "O\n";
	}
	cout << "\n\t";
	for (int i = 3; i <= 5; i++) {
		if (leftSeat[i] == 1) {
			cout << "X\t\t ";
		}
		else if (leftSeat[i] == 0) {
			cout << "O\t\t ";
		}
	}
	cout << "\n\n\t";
	for (int i = 6; i <= 8; i++) {
		if (leftSeat[i] == 1) {
			cout << "X\t\t ";
		}
		else if (leftSeat[i] == 0) {
			cout << "O\t\t ";
		}
	}
	cout << "\n\n\t\t\t뒤\n";
}