// 사용자로부터 정수의 개수를 입력 받아 배열을 동적 할당받고, 하나씩 정수를 입력 받은 후 합을 출력하는 프로그램을 작성하라.
#include <iostream>
using namespace std;

int main() {
	cout << "입력할 정수의 개수는?";
	int n;
	cin >> n; // 정수의 개수 입력

	int* p = new int[n]; // n 개의 정수 배열 동적 할당
	if (!p) {
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수: "; // 프롬프트 출력
		cin >> p[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	cout << "평균 = " << sum / n << endl;

	delete [] p; // 배열 메모리 반환

	return 0;
}