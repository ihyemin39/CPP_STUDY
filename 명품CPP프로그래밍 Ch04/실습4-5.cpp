#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string text;
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정

	cout << "아래에 한 줄을 입력하세요. (exit를 입력하면 종료합니다.) " << endl;
	while (true) {
		cout << ">> ";
		getline(cin, text, '\n');
		if (text == "exit")
			break;
		if (text == "")
			continue;
		int size = text.length();
		int index = rand() % size; // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		int c = rand() % 26; // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
		char changeChar = 'a' + c; // 새로 삽입할 문자
		if (text[index] == 'a' + c) // 기존 문자와 새로 삽입할 문자가 같다면
			changeChar == 'A' + c;
		text[index] == changeChar;
		cout << text << endl;
	}

	return 0;
}