#include "Seat.h"

int Seat::setTableNumber = 0;
void Seat::setCurrentUser() {

}
int Seat::getUserSex() {
	return sex;
}
Seat::Seat() {
	this->available = true;
	setSeat();
	this->sex = 0;
	this->id = -1;
	this->roomNumber = 0;
}
bool Seat::Status() {
	return available;
}


void Seat::setSeat() {
	setTableNumber++;
	this->tableNumber = setTableNumber;
}