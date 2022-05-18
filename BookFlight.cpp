﻿#include "BookFlight.h"
#include "Airport.h"
#include <cstring>


int BookFlight::Book() {
	
	setOnewayOrRound();
	if (this->onewayOrRound == 1) {
		setWhereToWhere();
		setDate();
		setTime();
		getFlightCode();
		a[this->departure].take(this->departure, this->date, time);
	}
	else {//왕복의 경우
		
		setWhereToWhere();
		setDate();
		setTime();
		getFlightCode();
		a[this->departure].take(this->departure, date, time);

		this->flightCode = "";
		string tmp;
		tmp = this->departureCode;
		this->departureCode = this->arrivalCode;
		this->arrivalCode = tmp;
		this->flightCode += this->departureCode;
		this->flightCode += this->arrivalCode;
		setDate();
		setTime();
		getFlightCode();
		a[this->departure].take(this->departure, date, time);
	}
	string input;
	while (1) {
		cout << "\n로그아웃:1 계속 예약하기:2 >> ";

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


void BookFlight::setOnewayOrRound() {
	string input;
	cout << "\n왕복과 편도 여행 중 하나를 선택하세요\n" << "왕복:0 편도:1 >> ";

	while (1) {
		cin >> input;

		if (input.length() == 1 && input[0] == 48) {
			cout << "\n왕복이 선택되었습니다.\n\n";
			this->onewayOrRound = 0;
			break;
		}
		else if(input.length() == 1 && input[0] == 49) {
			cout << "\n편도가 선택되었습니다.\n\n";
			this->onewayOrRound = 1;
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
	

}
void BookFlight::setTime() {
	string input;
	cout << "시간을 입력하세요 7시:07 12시:12 17시:17 >> ";

	while (1) {
		cin >>input;

		if (input.length() == 2 && input[0] == 48 && input[1] == 55) {
			cout << "7시 항공편이 선택되었습니다.\n";
			this->time = 7;
			this->flightCode += "07";
			break;
		}
		else if (input.length() == 2 && input[0] == 49 && input[1] == 50) {
			cout << "12시 항공편이 선택되었습니다.\n";
			this->time = 12;
			this->flightCode += "12";
			break;
		}
		else if (input.length() == 2 && input[0] == 49 && input[1] == 55) {
			cout << "17시 항공편이 선택되었습니다.\n";
			this->time = 17;
			this->flightCode += "17";
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
	cout << "\n";
}
void BookFlight::setDate() {
	string input;
	int tmp;
	cout << "\n오늘은 05월 16일입니다. 17일부터 23일까지 에약이 가능합니다.\n출발 날짜를 입력하세요(예: 05 19) >> ";
	while (1) {
		cin.ignore();
		getline(cin, input);

		if (input.length() == 5) {
			if (input[2] == ' ') {
				int number = 0;
				tmp = input[3] - '0';
				number += tmp * 10;
				number += input[4] - '0';

				this->date = number - 17;
				cout << date;
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
void BookFlight::setWhereToWhere() { //김포:1GP 제주:2CJ 김해:3KH 광주:4GJ 대구:5DG
	cout << "출발지를 선택하세요\n김포:1 제주:2 김해:3 광주:4 대구:5 >> ";
	string input;
	while (1) {
		cin >> input;
		if (input.length() == 1 && input[0] == 49) {
			cout << "\n김포 공항이 출발지로 선택되었습니다.\n";
			this->departureCode = "GP";
			this->departure = 0;
			this->flightCode = "GP";
			break;
		}
		else if (input.length() == 1 && input[0] == 50) {
			cout << "\n제주 공항이 출발지로 선택되었습니다.\n";
			this->departureCode = "CJ";
			this->departure = 1;
			this->flightCode = "CJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 51) {
			cout << "\n김해 공항이 출발지로 선택되었습니다.\n";
			this->departureCode = "KH";
			this->departure = 2;
			this->flightCode = "KH";
			break;
		}
		else if (input.length() == 1 && input[0] == 52) {
			cout << "\n광주 공항이 출발지로 선택되었습니다.\n";
			this->departureCode = "GJ";
			this->departure = 3;
			this->flightCode = "GJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 53) {
			cout << "\n대구 공항이 출발지로 선택되었습니다.\n";
			this->departureCode = "DG";
			this->departure = 4;
			this->flightCode = "DG";
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}

	cout << "\n도착지를 선택하세요\n김포:1 제주:2 김해:3 광주:4 대구:5 >> ";
	while (1) {
		cin >> input;
		if (input.length() == 1 && input[0] == 49 && this->departureCode != "GP") {
			cout << "\n김포 공항이 도착지로 선택되었습니다.\n";
			this->arrivalCode = "GP";
			this->arrival = 0;
			this->flightCode  += "GP";
			break;
		}
		else if (input.length() == 1 && input[0] == 50 && this->departureCode != "CJ") {
			cout << "\n제주 공항이 도착지로 선택되었습니다.\n";
			this->arrivalCode = "CJ";
			this->arrival = 1;
			this->flightCode += "CJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 51 && this->departureCode != "KH") {
			cout << "\n김해 공항이 도착지로 선택되었습니다.\n";
			this->arrivalCode = "KH";
			this->arrival = 2;
			this->flightCode += "KH";
			break;
		}
		else if (input.length() == 1 && input[0] == 52 && this->departureCode != "GJ") {
			cout << "\n광주 공항이 도착지로 선택되었습니다.\n";
			this->arrivalCode = "GJ";
			this->arrival = 3;
			this->flightCode += "GJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 53 && this->departureCode != "DG") {
			cout << "\n대구 공항이 도착지로 선택되었습니다.\n";
			this->arrivalCode = "DG";
			this->arrival = 4;
			this->flightCode += "DG";
			break;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
	
}


void BookFlight::getFlightCode() {
	cout << this->flightCode << endl;
}