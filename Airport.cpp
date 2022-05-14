#include "Airport.h"

Airport::Airport(string code) {
	this->code = code;
}
string Airport::getCode() {
	return this->code;
}