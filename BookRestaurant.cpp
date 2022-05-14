#include "BookRestaurant.h"
#include <cstring>

int BookRestaurant::Book() {
	setTime();
	setDate();

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