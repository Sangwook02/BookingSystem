#include "Airport.h"

Airport::Airport() {
	this->name = "";
	this->code = "";
}
string Airport::getName() {
	return this->name;
}
string Airport::getCode() {
	return this->code;
}