#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
	int i = 0;
	while (a[i]) {
		if (a[i] == c) {
			success = true; // 발견함. 함수 성공
			return a[i];
		}
		i++;
	}
	success = false; // 발견하지 못함
	return a[0]; // return 값 의미 없음
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M을 발견할 수 없다" << endl;
		return 0;
	}
	loc = 'm'; // 'M'위치에 'm' 기록
	cout << s << endl; // "mike"가 출력됨.
}