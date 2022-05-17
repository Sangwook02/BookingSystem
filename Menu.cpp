﻿#include "Menu.h"
#include "BookFlight.h"
#include "FlightAccount.h"
#include "BookRestaurant.h"
#include "BookStudyCafe.h"

#include <iostream>
using namespace std;


Menu::Menu() {
	this->flightSize = 0;
	user = new FlightAccount[1000]; // 수정 필요

	this->restaurantSize = 0;
	ruser = new RestaurantAccount[1000]; // 수정 필요

	this->studyCafeSize = 0;
	suser = new StudyCafeAccount[1000];
}
Menu::~Menu() {
	delete[] user;
	delete[] ruser;
	delete[] suser;
}

void Menu::getMenu() {
	string selectMenu;
	BookFlight *p = new BookFlight();
	BookRestaurant*q = new BookRestaurant();
	BookStudyCafe*r = new BookStudyCafe();
	string input;
	cout << "원하는 서비스를 선택하세요\n";
	while (1) {
		cout << "\n비행기 예약:1 식당 예약:2 독서실 예약:3 종료:4 >> ";
		cin >> selectMenu;
		int selected;

		if (selectMenu[0] == 49) {

			while (1) {
				selected = user->Menu();
				if (selected == 0) { //회원가입
					user[flightSize].setUser();
					this->flightSize += 1;
					
				}
				else if (selected == 1) {//로그인
					int i = user->login();
					if (i == 1) {
						int tmp = 0;
						while (tmp != 1) {
							tmp = p->Book();
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
				selected = ruser->Menu();
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
								tmp = q->Book();
							}
							else if (input.length() == 1 && input[0] == 50) {
								string Current = ruser->getCurrentUser();
								tmp = q->WalkIn(Current);
								
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
		else if (selectMenu[0] == 51) { //독서실
			while (1) {
				selected = suser->Menu();
				if (selected == 0) {
					suser[studyCafeSize].set();
					this->studyCafeSize += 1;
				}
				else if (selected == 1) {//로그인
					int i = suser->login();
					if (i == 1) {
						//예약
						r->Book();
					}
					else if (i == 0) {
						cout << "독서실 예약 종료:1 로그인 재시도:2 >> ";
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
		else if (selectMenu[0] == 52) {
			cout << "\n프로그램을 종료합니다.\n이용해주셔서 감사합니다.";
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}

	}
	
}