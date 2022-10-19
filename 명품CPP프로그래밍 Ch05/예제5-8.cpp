// 문자열 배열에서 매개 변수로 주어진 인덱스의 원소 공간에 대한 참조를 리턴하는 find() 함수의 사례를 보여준다.
#include <iostream>
using namespace std;

// 배열 s의 index 원소 공간에 대한 참조를 리턴하는 함수
char& find(char s[], int index) {
	return s[index]; // s[index] 공간의 참조 리턴
}

int main() {
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] = 'S'로 변경 // find()가 리턴한 위치에 문자 'S' 저장
	cout << name << endl;

	char& ref = find(name, 2); // ref는 name[2]에 대한 참조
	ref = 't'; // name = "Site"
	cout << name << endl;

	return 0;
}