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
	Circle circleArray[3]; // (1) Circle ��ü �迭 ����

	// �迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10); // (2)
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) { // �迭�� �� ���� ��ü�� ��� ����
		cout << "Circle" << i << "�� ������ " << circleArray[i].getArea() << endl;

	}

	Circle* p; // (3)
	p = circleArray; // (4) // p�� circleArray �迭�� ����Ų��.
	for (int i = 0; i < 3; i++) { // ��ü �����ͷ� �迭 ����
		cout << "Circle" << i << "�� ������ " << p->getArea() << endl;
		p++; // (5) // ���� Circle ��ü �ּҷ� ����
	} 

	/*
	// ��ü �����͸� �̿��Ͽ� circleArray�� �� Circle ��ü�� ������ ����ϴ� �ڵ带 �پ��ϰ� �ۼ��� �� �ִ�.

	// (1) ������ p�� �̿��Ͽ� ��üó�� ����
	Circle* p = circleArray;
	for (i = 0; i < 3; i++) {
		cout << (*p++).getArea() << endl;
	}

	// (2) �迭�� �̸� circleArray�� �����ͷ� ���
	for (i = 0; i < 3; i++) {
		cout << (circleArray + i)->getArea() << endl;
	}

	// (3) ������ p�� ���� ���� �̿�
	Circle* p = circleArray;
	for (i = 0; i < 3; i++) {
		cout << (p + i)->getArea();
	}
	*/


	return 0;
}