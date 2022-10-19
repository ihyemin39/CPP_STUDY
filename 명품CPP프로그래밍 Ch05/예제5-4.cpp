// 객체에 대한 참조 변수를 선언하고 사용하는 사례를 보인다. 실행결과는 무엇인가?
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

int main() {
	Circle circle;
	Circle& refc = circle; // circle 객체에 대한 참조 변수 refc의 선언
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea(); // 두 호출은 동일 객체에 대한 호출

	return 0;
}