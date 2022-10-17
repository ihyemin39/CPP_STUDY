#include <iostream>
using namespace std;

int main() {
	// 배열 동적 할당
	int* p = new int[6];

	// 5개 정수 입력 받아 배열에 저장
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}

	// 평균 계산
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += p[i];
	}

	cout << "평균 " << sum/5.0 << endl;

	delete[] p; // 동적 할당 받은 배열 반환

	return 0;
}