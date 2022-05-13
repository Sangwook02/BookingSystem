#include "FlightAccount.h"
#include "Menu.h"

FlightAccount::FlightAccount() {
	this->mileage = 0;
}
void FlightAccount::addMileage() {
	this->mileage += 100;
}
int FlightAccount::Menu() {
	cout << "\n메뉴를 선택하세요.\n회원가입:1 로그인:2 >> ";
	string input;
	while (1) {
		cin >> input;
		if (input.length() == 1 && input[0] == 49) {
			cout << "\n회원가입을 시작합니다.\n\n";
			return 0;
		}
		else if (input.length()  == 1 && input[0] == 50) {
			cout << "\n로그인을 시작합니다.\n\n";
			return 1;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
}