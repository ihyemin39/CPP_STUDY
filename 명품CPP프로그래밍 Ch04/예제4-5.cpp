#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int;
	if (!p) { // p�� NULL�̸�, �޸� �Ҵ� ����
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5; // �Ҵ� ���� ���� ������ 5 ���
	int n = *p;
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	return 0;
}