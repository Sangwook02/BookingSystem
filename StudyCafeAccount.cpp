#include "StudyCafeAccount.h"

int StudyCafeAccount::userID = 0;
map<int, string> StudyCafeAccount::user;

int StudyCafeAccount::Menu() {
	cout << "\n메뉴를 선택하세요.\n회원가입:1 로그인:2 뒤로 가기:3 >> ";
	string input;
	while (1) {
		cin >> input;
		if (input.length() == 1 && input[0] == 49) {
			cout << "\n회원가입을 시작합니다.\n\n";
			return 0;
		}
		else if (input.length() == 1 && input[0] == 50) {
			cout << "\n로그인을 시작합니다.\n\n";
			return 1;
		}
		else if (input.length() == 1 && input[0] == 51) {
			return 2;
		}
		else {
			cout << "\n옳지 않은 입력입니다.\n다시 입력해주세요.\n\n";
		}
	}
}


void StudyCafeAccount::set() { //회원가입

	cout << "호수를 입력하십시오 >> ";
	string num;
	cin >> num;

	int number = 0, tmp;

	int size = (int)num.size();

	for (int i = 0; i < num.size(); i++) {
		tmp = num[i] - '0';
		size -= 1;
		number += tmp * pow(10, size);
	}
	this->roomNumber = number;
	this->id = userID;
	cout << "아이디는 " << userID << "입니다.\n";
	addUserID();

	cout << "비밀번호를 입력하십시오(영문 소문자와 숫자 포함 최소 9자 이상 공백 포함 불가): ";
	string pw;
	cin >> pw;

	//요구 사항 준수했는지 확인 필요
	user.insert(make_pair(id, pw));
	cout << "\n\n회원가입이 완료되었습니다.\n";
	
}
void StudyCafeAccount::addUserID() {
	this->userID += 1;
}

int StudyCafeAccount::login() {
	cout << "아이디를 입력하세요 >> ";
	string num, pw;
	int i;

	cin >> num;

	int number = 0, tmp;
	int size = (int)num.size();
	for (int i = 0; i < num.size(); i++) {
		tmp = num[i] - '0';
		size -= 1;
		number += tmp * pow(10, size);
	}
	i = number;

	cout << "비밀번호를 입력하세요 >> ";
	cin >> pw;

	if (user[i] == pw) {
		cout << "\n---로그인 성공---\n\n";
		return 1;
	}
	else {
		cout << "\n---로그인 실패---\n\n";
		return 0;
	}
}