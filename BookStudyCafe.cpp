#include "BookStudyCafe.h"

int BookStudyCafe::Book() {

}

void BookStudyCafe::setDate() {
	string input;
	int tmp;
	cout << "\n오늘은 05월 16일입니다. 17일부터 23일까지 에약이 가능합니다.\n방문 날짜를 입력하세요(예: 05 19) >> ";
	while (1) {
		cin.ignore();
		getline(cin, input);

		if (input.length() == 5) {
			if (input[0] == 0 && input[1] == 5 && input[2] == ' ') {
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