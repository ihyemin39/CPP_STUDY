// 원의 개수를 입력받고 Circle 배열을 동적 생성하라.
// 반지름 값을 입력받아 Circle 배열에 저장하고 면적이 100에서 200 사이인 원의 개수를 출력하라

#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	~Circle() { }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
	radius = 1;
}

int main() {
	cout << "생성하고자 하는 원의 개수?";
	int n, radius;
	cin >> n; // 원의 개수 입력
	if (n <= 0) return 0; // 1보다 작은 정수가 입력되면 프로그램 종료
	Circle* pArray = new Circle[n]; // n개의 Circle 배열 생성
	for (int i = 0; i < n; i++) {
		cout << "원" << i + 1 << ": "; //프롬프트 출력
		cin >> radius; // 반지름 입력
		pArray[i].setRadius(radius); // 각 Circle의 객체를 반지름으로 초기화
	}
	int count = 0; // 카운트 변수
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		cout << p->getArea() << ' '; // 원의 면적 출력
		if (p->getArea() >= 100 && p->getArea() <= 200) {
			count++;
		}
		p++;
	}

	cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
	delete[] pArray;



	return 0;
}