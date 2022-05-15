#include "BookRestaurant.h"
#include <cstring>

int BookRestaurant::Book() {
	setDate();
	setTime();

	//예약가능한 자리 보여주고 확정받기.

	//예약 후에
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
int BookRestaurant::getFour_q_size() {
	return four_q.size();
}
int BookRestaurant::WalkIn(string id) {
	four_q.push(id);

	return 1;
}

void BookRestaurant::setTime() {
	cout << "런치와 디너 중 하나를 골라주세요.\n\n" << "런치:1 디너:2 >> ";
	string input;
	cin >> input;

	if (input.length() == 1) {
		if (input[0] == 49) {
			cout << "런치를 선택했습니다.\n\n";
		}
		else if (input[0] == 50) {
			cout << "디너를 선택했습니다.\n\n";
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