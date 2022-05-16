#include "Table.h"

Table::Table() {
	this->available = true;
	this->capacity = 0;
	this->code = " ";
}

Table::Table(string code, int capacity) {
	this->available = true;
	this->capacity = 0;
	this->code = "0";
}
void Table::getID() {

}
void Table::setTable(string code, int capacity) {
	this->available = true;
	this->capacity = capacity;
	this->code = code;
}
void Table::showUpDown() {
	cout << "\t" << "ㅡㅡㅡ" << "\t" << "ㅡㅡㅡ" << "\t\t" << "ㅡㅡㅡ" << "\n";
}
void Table::showMid() {
	cout << "\t" << "|" << "    " << "|" << "\t" << "|" << "    " << "|" << "\t\t" <<"|" << "    " << "|" << "\n";
}

string Table::able() {
	if (this->available == true) {
		return code;
	}
	else {
		return " ";
	}
}