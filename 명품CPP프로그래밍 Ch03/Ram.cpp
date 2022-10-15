#include<iostream>
using namespace std;

#include "Ram.h"

Ram::Ram() {
	size = 100 * 1024;
	for (int i = 0; i < size; i++) {
		mem[i] = 0;
	}
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) {
	if (address < 0 || address >= size) {
		cout << "주소의 범위를 벗어나는 오류 발생" << endl;
		return -1; // 오류임을 알리는 값
	}
	return mem[address];
}

void Ram::write(int address, char value) {
	if (address < 0 || address >= size)
		cout << "주소의 범위를 벗어나는 오류 발생" << endl;
	mem[address] = value;
}