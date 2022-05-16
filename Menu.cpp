#include "Menu.h"
#include "BookFlight.h"
#include "FlightAccount.h"
#include "BookRestaurant.h"

#include <iostream>
using namespace std;

Menu::Menu() {
	this->flightSize = 0;
	user = new FlightAccount[1]; // 수정 필요

	this->restaurantSize = 0;
	ruser = new RestaurantAccount[10]; // 수정 팔요
}
Menu::~Menu() {
	delete[] user;
	delete[] ruser;
}

void Menu::getMenu() {
	string selectMenu;
	BookFlight a;
	BookRestaurant b;
	string input;
	cout << "원하는 서비스를 선택하세요\n";
	while (1) {
		cout << "\n비행기 예약:1 식당 예약:2 독서실 예약:3 종료:4 >> ";
		cin >> selectMenu;
		int selected;

		if (selectMenu[0] == 49) {

			while (1) {
				selected = user[flightSize].Menu();
				if (selected == 0) { //회원가입
					user[flightSize].setUser();
					this->flightSize += 1;
					
				}
				else if (selected == 1) {//로그인
					int i = user->login();
					if (i == 1) {
						int tmp = 0;
						while (tmp != 1) {
							tmp = a.Book();
						}
						
					}
					else if (i == 0) {
						cout << "비행기 예약 종료:1 로그인 재시도:2 >> ";

						cin >> input;
						if (input.length() == 1 && input[0] == 49) {
							break;
						}
						else if (input.length() == 1 && input[0] == 50) {
							continue;
						}
						else {
							cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
						}
					}
				}
				else if (selected == 2) {
					break;
				}
			}
			
		}
		else if (selectMenu[0] == 50) {
			while (1) {
				selected = ruser[restaurantSize].Menu();
				if (selected == 0) {
					ruser[restaurantSize].setUser();
					this->restaurantSize += 1;
				}
				else if (selected == 1) {//로그인
					int i = ruser->login();
					if (i == 1) {
						int tmp = 0;
						while (tmp != 1) {
							cout << "예약 또는 Walk-in 중에 하나를 선택해주세요\n" << "예약:1 Walk-in:2 >> ";
							cin >> input;

							if (input.length() == 1 && input[0] == 49) {
								tmp = b.Book();
							}
							else if (input.length() == 1 && input[0] == 50) {
								string Current = ruser->getCurrentUser();
								tmp = b.WalkIn(Current);
								
							}
							else {
								cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
							}

							
						}

					}
					else if (i == 0) {
						cout << "식당 예약 종료:1 로그인 재시도:2 >> ";
						string input;

						cin >> input;
						if (input.length() == 1 && input[0] == 49) {
							break;
						}
						else if (input.length() == 1 && input[0] == 50) {
							continue;
						}
						else {
							cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
						}
					}
				}
				else if (selected == 2) {
					break;
				}
			}
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