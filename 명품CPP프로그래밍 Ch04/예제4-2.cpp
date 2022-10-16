#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle circleArray[3]; // (1) Circle 객체 배열 생성

	// 배열의 각 원소 객체의 멤버 접근
	circleArray[0].setRadius(10); // (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) { // 배열의 각 원소 객체의 멤버 접근
		cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl;

	}

	Circle* p; // (3)
	p = circleArray; // (4) // p는 circleArray 배열을 가리킨다.
	for (int i = 0; i < 3; i++) { // 객체 포인터로 배열 접근
		cout << "Circle" << i << "의 면적은 " << p->getArea() << endl;
		p++; // (5) // 다음 Circle 객체 주소로 증가
	} 

	/*
	// 객체 포인터를 이용하여 circleArray의 각 Circle 객체의 면적을 출력하는 코드를 다양하게 작성할 수 있다.

	// (1) 포인터 p를 이용하여 객체처럼 접근
	Circle* p = circleArray;
	for (i = 0; i < 3; i++) {
		cout << (*p++).getArea() << endl;
	}

	// (2) 배열의 이름 circleArray를 포인터로 사용
	for (i = 0; i < 3; i++) {
		cout << (circleArray + i)->getArea() << endl;
	}

	// (3) 포인터 p의 정수 연산 이용
	Circle* p = circleArray;
	for (i = 0; i < 3; i++) {
		cout << (p + i)->getArea();
	}
	*/


	return 0;
}