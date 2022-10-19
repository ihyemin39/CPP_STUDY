#include <iostream>
using namespace std;

class Dept {
	int size; // scores �迭�� ũ��
	int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ�
public:
	Dept(int size) { // ������
		this->size = size;
		scores = new int[size];
	}
	Dept(const Dept& dept); // ���� ������
	~Dept(); // �Ҹ���
	int getSize() { return size; }
	void read(); // size ��ŭ Ű���忡�� ������ �о� scores �迭�� ����
	bool isOver60(int index); // index�� �л��� ������ 60���� ũ�� true ����
};


// ���� (2) �Ʒ��� ���� �����ڸ� �����ϸ� ���� ������ �߻��Ѵ�.
/* Dept::Dept(Dept& src) { // ���� ������.
	size = src.size; // �Ҽ��� ũ�� ����
	scores = new int[size]; // �ҽ��� ������ ũ���� �迭 ����

	// src ��ü�� ���� ���� ���� �� ��ü ����
	for (int i = 0; i < size; i++)
		scores[i] = src.scores[i];
}*/

Dept::Dept(const Dept& dept) { // ���� ������
	this->size = dept.size; // �ҽ��� ũ�� ����
	scores = new int[size]; // �ҽ��� ������ ũ���� �迭 ����

	// dept ��ü�� ���� ���� ���� �� ��ü ����
	for (int i = 0; i < size; i++) {
		scores[i] = dept.scores[i];
	}
}

Dept::~Dept() {
	if (scores != NULL) {
		delete[] scores;
	}
}

void Dept::read() {
	cout << size << "�� ���� �Է�>> ";
	for (int i = 0; i < size; i++) {
		cin >> scores[i];
	}
}

bool Dept::isOver60(int index) {
	if (scores[index] > 60) return true;
	else return false;
}

/* ���� (1)�� ���� : ���� �����ڰ� ��� ȣ��Ǵ°�?
	countPass(Dept dept)�� ȣ��� ��, �Ű������� dept ��ü�� �����ȴ�.
	dept�� �����Ǵ� ������ ������ ����.
	(1) ���� Dept Ŭ������ ũ�⸸�� ��ü ������ ����� ��ü�� �̸��� dept�� �ȴ�.
	(2) dept ��ü�� ���� �����ڰ� ������� ������ ���� �����ڰ� ȣ��ǰ�,
		���� �����ڰ� ���ٸ� �������� ������� ���� com�� �״�� dept�� ����ȴ�.
*/

/* ���� (2)�� ���� : ���� �����ڰ� ������ �� ���� ������ �߻��ϴ°�?
	���� ��信���� ����, ���� �����ڰ� ������
	countPass(Dept dept)�� ȣ��Ǿ� �Ű������� dept ��ü�� ������ ��
	���� com�� �״�� ����ȴ�.
	�׷��Ƿ� com ��ü�� ��� scores�� dept ��ü�� ��� scores�� �״�� ����Ǿ�
	�� dept�� scores�� com���� �����Ҵ���� scores�� �Բ� ����Ű�� �ȴ�.
	countPass(Dept dept) �Լ��� ����ǰ� ����Ǹ� dept ��ü�� �������.
	�̶� dept ��ü�� �Ҹ��ڰ� ����Ǵµ�, �� �Ҹ��ڴ� ���� dept�� ��� ������
	scores�� ����Ű�� ���� �迭�� ��� ��ȯ�Ѵ�. ��� dept�� scores �����͸�
	main�� com ��ü������ ���� �Ҵ� ���� �迭�̴�.
	��������� �ƹ� ������ �߻����� ������, main() �Լ��� ������ �� ����������
	com ��ü�� �Ҹ�ǰ� �̶� �Ҹ��ڰ� ȣ��ȴ�.
	�Ҹ��ڴ� com ��ü���� scores �����Ͱ� ����Ű�� �ִ� ���� �Ҵ�� �迭�� ��ȯ�ϴµ�
	�̶� ������ �߻��Ѵ�. �� �迭�� �̹� dept ��ü�� �Ҹ�� �� ��ȯ�ع��ȴ�.
	�̹� ��ȯ�ع��� �迭 �޸𸮸� �ٽ� ��ȯ�ϰ� �Ǿ� ���� ������ �߻��Ѵ�.
*/


int countPass(Dept dept) { // dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i)) count++;
	}
	return count;
}

int main() {
	Dept com(10); // �� 10���� �ִ� �а� com
	com.read(); // �� 10���� �л����� ������ Ű����κ��� �о� scores �迭�� ����
	int n = countPass(com); // com �а��� 60�� �̻����� ����� �л��� ���� ����
	cout << "60�� �̻��� " << n << "��";

	return 0;
}