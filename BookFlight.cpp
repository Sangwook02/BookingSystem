#include "BookFlight.h"
#include <cstring>
int BookFlight::Book() {

	setOnewayOrRound();
	if (this->onewayOrRound == 1) {
		setWhereToWhere();
		setDate();
		setTime();
		getFlightCode();
	}
	else {
		Book(); // 왕복의 경우 돌아오는 항공편 예약을 위한 재귀
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
	cout << "시간을 입력하세요 >> ";

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
	cout << "\n출발 날짜를 입력하세요(예: 05 19) >> ";
	int tmp;
	while (1) {
		cin.ignore();
		getline(cin, input);

		if (input[2] == ' ') {
			tmp = (int)input[0] * 10;
			tmp += (int)input[1];
			this->month = tmp;
			this->flightCode += input[0];
			this->flightCode += input[1];

			tmp = (int)input[3] * 10;
			tmp += (int)input[4];
			this->date = tmp;
			this->flightCode += input[3];
			this->flightCode += input[4];
			cout << "\n";
			break;
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
			this->departure = "GP";
			this->flightCode = "GP";
			break;
		}
		else if (input.length() == 1 && input[0] == 50) {
			cout << "\n제주 공항이 출발지로 선택되었습니다.\n";
			this->departure = "CJ";
			this->flightCode = "CJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 51) {
			cout << "\n김해 공항이 출발지로 선택되었습니다.\n";
			this->departure = "KH";
			this->flightCode = "KH";
			break;
		}
		else if (input.length() == 1 && input[0] == 52) {
			cout << "\n광주 공항이 출발지로 선택되었습니다.\n";
			this->departure = "GJ";
			this->flightCode = "GJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 53) {
			cout << "\n대구 공항이 출발지로 선택되었습니다.\n";
			this->departure = "DG";
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
		if (input.length() == 1 && input[0] == 49 && this->departure != "GP") {
			cout << "\n김포 공항이 도착지로 선택되었습니다.\n";
			this->arrival = "GP";
			this->flightCode  += "GP";
			break;
		}
		else if (input.length() == 1 && input[0] == 50 && this->departure != "CJ") {
			cout << "\n제주 공항이 도착지로 선택되었습니다.\n";
			this->arrival = "CJ";
			this->flightCode += "CJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 51 && this->departure != "KH") {
			cout << "\n김해 공항이 도착지로 선택되었습니다.\n";
			this->arrival = "KH";
			this->flightCode += "KH";
			break;
		}
		else if (input.length() == 1 && input[0] == 52 && this->departure != "GJ") {
			cout << "\n광주 공항이 도착지로 선택되었습니다.\n";
			this->arrival = "GJ";
			this->flightCode += "GJ";
			break;
		}
		else if (input.length() == 1 && input[0] == 53 && this->departure != "DG") {
			cout << "\n대구 공항이 도착지로 선택되었습니다.\n";
			this->arrival = "DG";
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