// 예제 5-1 코드를 수정하여 main() 함수가 increase() 함수를 호출하여 반지름을 1만큼 증가시키고자 한다. increase() 함수를 구현하라.
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle& c) { // c는 참조 매개 변수
	int r = c.getRadius();
	c.setRadius(r + 1); // c가 참조하는 원본 객체의 반지름 1증가
}

int main() {
	Circle waffle(30);
	increase(waffle); // 참조에 의한 호출
	cout << waffle.getRadius() << endl;

	return 0;
}