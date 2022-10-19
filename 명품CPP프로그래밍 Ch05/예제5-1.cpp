// '값에 의한 호출'(call by value)시 매개 변수의 생성자 실행되지 않음
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

void increase(Circle c) { // 객체 c의 생성자 실행되지 않음
	int r = c.getRadius();
	c.setRadius(r + 1);
} // 객체 c의 소멸자 실행됨.

int main() {
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;

	return 0;
}