#include "Account.h"

Account::Account() {
	this->name = "";
	this->numberOfBooking = 0;
}
void Account::setUser() { //회원가입
	cout << "이름을 입력하십시오: ";
	string name;
	cin >> name;
	this->name = name;

	cout << "아이디를 입력하십시오(영문 소문자와 숫자 포함 최소 9자 이상 공백 포함 불가): ";
	string id;
	cin >> id;
	//데이터베이스에 중복되는 아이디  있는지 확인 하는 코드 삽입 필요.
	//요구 사항 준수했는지 확인 필요
	cout << "비밀번호를 입력하십시오(영문 소문자와 숫자 포함 최소 9자 이상 공백 포함 불가): ";
	string pw;
	cin >> pw;
	//요구 사항 준수했는지 확인 필요
	user.insert(make_pair(id, pw));
	cout << "\n\n회원가입이 완료되었습니다.\n";
}

void Account::show() { //제출 전 삭제
	string id;
	cin >> id;
	cout << user[id];
}

int Account::login() {
	char input[50];
	cout << "아이디를 입력하세요>> ";
	string id, pw;
	cin >> id;
	cout << "\n\n비밀번호를 입력하세요>> ";
	cin >> pw;

	if (user[id] == pw) {
		cout << "로그인 성공\n";
		return 1;
	}
	else {
		cout << "로그인 실패\n";
		return 0;
	}
	
}