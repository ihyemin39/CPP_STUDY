#include <iostream>
using namespace std;

#include "Adder.h"
#include "Calculator.h"

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; //���� �� �� �Է�
	Adder adder(a, b); //  ������ ����
	cout << adder.process(); // ���� ���

}