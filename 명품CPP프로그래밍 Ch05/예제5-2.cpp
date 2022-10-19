// ��ü ����
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp; // tmp ��ü�� ���纻 ���� // ��ü tmp�� �����Ѵ�.
}

int main() {
	Circle c; // ��ü�� �����ȴ�. radius = 1�� �ʱ�ȭ�ȴ�.
	cout << c.getArea() << endl;

	c = getCircle(); // tmp ��ü�� c�� ����. c�� radius�� 30�� �ȴ�.
	cout << c.getArea() << endl;

	return 0;
} 