// 5개의 string 배열을 선언하고 getline() 전역 함수를 이용하여 문자열을 입력받아 사전 순으로 가장 뒤에 나오는 문자열을 출력하라.
// 문자열 비교는 <, > 연산자를 간단히 이용하면 된다.

#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5]; // 문자열 배열 선언

	for (int i = 0; i < 5; i++) {
		cout << "이름 >> ";
		getline(cin, names[i], '\n');
	}

	string latter = names[0];
	for (int i = 1; i < 5; i++) {
		if (latter < names[i]) { // 사전 순으로 latter 문자열이 앞에 온다면
			latter = names[i]; // latter 문자열 변경
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;

	return 0;
}