﻿#include "Airport.h"

Airport::Airport() {
	this->code = "";
}
Airport::Airport(string code) {
	this->code = code;
}
string Airport::getCode() {
	return this->code;
}
int Airport::take(int a, int b, int c) {
	f[a][b][c].showLeftSeat();
	int pick;
	while (1) {
		cout << "예약할 좌석의 번호를 입력해주세요. >> ";
		cin >> pick;
		if (f[a][b][c].getStatus(pick) == 0) {
			f[a][b][c].setStatus(pick);
			return 1;
		}
		else {
			cout << "이미 선점된 좌석입니다.\n다른 테이블을 선택해주세요.\n";
			return 0;
		}
	}
	
}