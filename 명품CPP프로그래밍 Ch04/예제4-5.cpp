#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;
	if (!p) { // p가 NULL이면, 메모리 할당 실패
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5; // 할당 받은 정수 공간에 5 기록
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	return 0;
}