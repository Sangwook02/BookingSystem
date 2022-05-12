#include "Menu.h"
#include "BookFlight.h"
#include "FlightAccount.h"
#include <iostream>
using namespace std;

Menu::Menu() {
	this->flightSize = 0;
	user = new FlightAccount[10]; // 수정 필요
}
Menu::~Menu() {
	delete[] user;
}

void Menu::getMenu() {
	char selectMenu[100];
	cout << "원하는 서비스를 선택하세요\n";
	while (1) {
		cout << "\n비행기 예약:1\n식당 예약:2\n독서실 예약:3\n종료:4\n>> ";
		cin.getline(selectMenu,100);
		int selected;
		if (selectMenu[0] == 49) {
			selected = user[flightSize].Menu();
			if (selected == 0) {
				user[flightSize].setUser();
				this->flightSize += 1;
				user->login();
			}
			else if (selected == 1) {
				user->login();
				BookFlight a;
				a.Book();
			}
			

			
		}
		else if (selectMenu[0] == 50) {

		}
		else if (selectMenu[0] == 51) {

		}
		else if (selectMenu[0] == 52) {
			cout << "\n프로그램을 종료합니다.\n이용해주셔서 감사합니다.";
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}

	}
	
}