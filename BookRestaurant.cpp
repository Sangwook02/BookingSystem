﻿#include "BookRestaurant.h"
#include <cstring>

BookRestaurant::BookRestaurant() {
	this->date = 0;
	this->time = 0;
	this->month = 0;
	t[0].setTable("0", 4), t[1].setTable("1", 4), t[2].setTable("2", 4), t[3].setTable("3", 4), t[4].setTable("4", 6), t[5].setTable("5", 6), t[6].setTable("6", 4), t[7].setTable("7", 4), t[8].setTable("8", 6);
}

int BookRestaurant::Book() {
	setDate();
	setTime();
	t->showUpDown();
	cout << "\t" << "|" << "  "<< t[0].able() << " " << "|" << "\t" << "|" << "  " << t[1].able() << " " << "|" << "\t\t" << "|" << "    " << "|" << "\n";
	t->showUpDown();
	cout << "\n";
	t->showUpDown();
	cout << "\t" << "|" << "  " << t[2].able() << " " << "|" << "\t" << "|" << "  " << t[3].able() << " " << "|" << "\t\t" << "|" << "    " << "|" << "\n";
	t->showUpDown();
	cout << "\n";
	t->showUpDown();
	t->showMid();
	cout << "\t" << "|" << "  " << t[4].able() << " " << "|" << "\t" << "|" << "  " << t[5].able() << " " << "|" << "\t\t" << "|" << "    " << "|" << "\n";
	t->showMid();
	t->showUpDown();
	//예약가능한 자리 보여주고 확정받기.

	//예약 후에
	cout << "\n로그아웃:1 계속 예약하기:2 >> ";

	string input;
	while (1) {
		cin >> input;

		if (input.length() == 1 && input[0] == 49) {
			return 1;
		}
		else if (input.length() == 1 && input[0] == 50) {
			return 0;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
}
int BookRestaurant::getFour_q_size() {
	return four_q.size();
}
int BookRestaurant::getSix_q_size() {
	return six_q.size();
}
int BookRestaurant::WalkIn(string id) {
	cout << "인원 수를 입력해주세요\n최대 14명까지 이용 가능합니다.\n\n>>";
	string num;
	cin >> num;
	int number = 0, tmp;
	int size = (int)num.size();
	for (int i = 0; i < num.size(); i++) {
		tmp = num[i] - '0';
		size -= 1;
		number += tmp * pow(10, size);
	}
	//int num에 전체 인원 수 입력 받는 과정.
	if (number <= 4 && number > 0) {
		four_q.push(id);
		if (getFour_q_size() < 3) {
			cout << "4인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "4인 테이블의 현재 내 앞 대기팀은 " << getFour_q_size() - 2 << "팀입니다.\n\n";
		}
	}
	else if(number >= 5 && number <= 6) {
		six_q.push(id);
		if (getSix_q_size() < 1) {
			cout << "6인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "6인 테이블의 현재 내 앞 대기팀은 " << getSix_q_size() - 1 << "팀입니다.\n\n";
		}
	}
	else if (number >= 7 && number <= 8) {
		four_q.push(id);
		if (getFour_q_size() < 3) {
			cout << "4인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "4인 테이블의 현재 내 앞 대기팀은 " << getFour_q_size() - 2 << "팀입니다.\n\n";
		}
		four_q.push(id);
	}
	else if (number >= 9 && number <= 10) {
		four_q.push(id);
		if (getFour_q_size() < 3) {
			cout << "4인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "4인 테이블의 현재 내 앞 대기팀은 " << getFour_q_size() - 2 << "팀입니다.\n\n";
		}
		six_q.push(id);
		if (getSix_q_size() < 1) {
			cout << "6인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "6인 테이블의 현재 내 앞 대기팀은 " << getSix_q_size() - 1 << "팀입니다.\n\n";
		}
	}
	else if (number >= 11 && number <= 14) {
		four_q.push(id);
		if (getFour_q_size() < 3) {
			cout << "4인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "4인 테이블의 현재 내 앞 대기팀은 " << getFour_q_size() - 2 << "팀입니다.\n\n";
		}
		four_q.push(id);
		six_q.push(id);
		if (getSix_q_size() < 1) {
			cout << "6인 테이블의 현재 내 앞 대기팀은 0팀입니다.\n\n";
		}
		else {
			cout << "6인 테이블의 현재 내 앞 대기팀은 " << getSix_q_size() - 1 << "팀입니다.\n\n";
		}
	}
	else {
		cout << "예약 가능한 인원 수가 아닙니다.\n\n";
	}
	

	cout << "\n로그아웃:1 계속 예약하기:2 >> ";
	string input;
	cin >> input;

	if (input.length() == 1 && input[0] == 49) {
		return 1;
	}
	else if (input.length() == 1 && input[0] == 50) {
		return 0;
	}
	else {
		cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
	}
}

void BookRestaurant::setTime() {
	cout << "시간을 골라주세요.\n\n<런치>\n12시:1 13시:2\n\n<디너>\n18시:3 19시:4\n>> ";
	string input;
	cin >> input;

	if (input.length() == 1) {
		if (input[0] == 49) {
			cout << "런치 12시를 선택했습니다.\n\n";
			this->time = 12;
		}
		else if (input[0] == 50) {
			cout << "런치 13시를 선택했습니다.\n\n";
			this->time = 13;
		}
		else if (input[0] == 51) {
			cout << "디너 18시를 선택했습니다.\n\n";
			this->time = 18;
		}
		else if (input[0] == 52) {
			cout << "디너 19시를 선택했습니다.\n\n";
			this->time = 19;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
	else {
		cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
	}
}

void BookRestaurant::setDate() {
	string input;
	int tmp;
	cout << "\n방문 날짜를 입력하세요(예: 05 19) >> ";
	while(1) {
		cin.ignore();
		getline(cin, input);

		if (input.length() == 5) {
			if (input[2] == ' ') {
				tmp = (int)input[0] * 10;
				tmp += (int)input[1];
				this->month = tmp;

				tmp = (int)input[3] * 10;
				tmp += (int)input[4];
				this->date = tmp;
				cout << "\n";
				break;
			}
			else {
				cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
			}
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
}