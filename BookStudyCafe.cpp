#include "BookStudyCafe.h"

int BookStudyCafe::take(int part, int a, int b) {
	if (s[part][a][b].Status() == true) {
		s[part][a][b].setStatus();
		cout << "예약이 완료 되었습니다.\n\n";
		return 1;
	}
	else {
		cout << "이미 선점된 자리입니다.\n다른 자리를 선택해주세요.\n";
		return 0;
	}
}



int BookStudyCafe::Book() {
	setDate();
	setTime();
	//자리 선택
	string num;
	for (int i = 0; i < 14; i++) {
		if (time[i] == 1) {
			//자리 보여주고 예약 받기
			cout << i+9 << "시 남은 좌석\n";
			for (int m = 0; m < 15; m++) {
				cout << "\t|";
				for (int n = 0; n < 15; n++) {
					s[14 * date + i][m][n].able();
					cout << "|";
				}
				cout << "\n\t-------------------------------------------------------------\n";
			}
			int b = 0;
			while (b == 0) {
				cin >> num;

				int number = 0, tmp;
				int size = (int)num.size();
				for (int j = 0; j < num.size(); j++) {
					tmp = num[j] - '0';
					size -= 1;
					number += tmp * pow(10, size);
				}
				if (number < 225 && number >= 0) {
					b = take(14 * date + i, number / 15, number % 15);
				}
				else {
					cout << "잘못된 입력입니다. 다시 입력해주세요.\n";
				}
			}
		}
	}
	return 0;
}

BookStudyCafe::BookStudyCafe() {
	for (int i = 0; i < 98; i++) {
		for (int j = 0; j < 15; j++) {
			for (int k = 0; k < 15; k++) {
				s[i][j][k].setSeat((15*j)+k);
			}
		}
	}
}


void BookStudyCafe::setTime() {
	string input;
	int total = 0;

	cout << "오전 9시부터 오후 10시까지 예약이 가능합니다.(시작 시간 기준)\n이용하려 하는 총 시간을 입력해주세요\n최대 4시간까지 이용 가능합니다.";
	
	while (1) {
		cout << "\n>>";
		cin >> input;
		if (input.length() == 1) {
			if (input[0] == 49) {
				cout << "총 1시간 이용합니다.\n\n";
				total = 1;
				break;
			}
			else if (input[0] == 50) {
				cout << "총 2시간 이용합니다.\n\n";
				total = 2;
				break;
			}
			else if (input[0] == 51) {
				cout << "총 3시간 이용합니다.\n\n";
				total = 3;
				break;
			}
			else if (input[0] == 52) {
				cout << "총 4시간 이용합니다.\n\n";
				total = 4;
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
	string num;
	int k;
	cout << "이용하고자 하는 시간을 한 줄에 하나씩 입력해주세요.(시작 시간 기준, 24시간제)\n";
	for (int i = 1; i <= total; i++) {
		cout << ">> ";
		cin >> num;

		int number = 0, tmp;
		int size = (int)num.size();
		for (int j = 0; j < num.size(); j++) {
			tmp = num[j] - '0';
			size -= 1;
			number += tmp * pow(10, size);
		}
		k = number-9;
		time[k] = 1;
	}

}

void BookStudyCafe::setDate() {
	string input;
	int tmp;
	cout << "\n오늘은 05월 16일입니다. 17일부터 23일까지 에약이 가능합니다.\n방문 날짜를 입력하세요(예: 05 19) >> ";
	while (1) {
		cin.ignore();
		getline(cin, input);

		if (input.length() == 5) {
			if (input[0] == '0' && input[1] == '5' && input[2] == ' ') {
				int number = 0;
				tmp = input[3] - '0';
				number += tmp * 10;
				number += input[4] - '0';

				this->date = number - 17;
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