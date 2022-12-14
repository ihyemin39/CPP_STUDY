// 깊은 복사 생성자를 추가한 것 외에 모든 것이 동일하다.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name); // 생성자
	Person(const Person& person); // 복사 생성자
	~Person(); // 소멸자
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); // name의 문자 개수 // strlen 은 문자열의 시작 부터, 널 문자 직전 까지의 문자의 개수를 센다.
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name에 문자열 복사 // strcpy함수는 문자열을 다른 문자열에 복사하는 함수
}

Person::Person(const Person& person) { // 복사 생성자
	this->id = person.id; // id값 복사
	int len = strlen(person.name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, person.name); // name에 문자열 복사
	cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
}

Person::~Person() { // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name;
}

void Person::changeName(const char* name) { // 이름 변경
	if (strlen(name) > strlen(this->name))
		return; // 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	strcpy(this->name, name);
}

int main() {
	Person father(1, "Kitae"); // (1) father 객체 생성
	Person daughter(father); // (2) daughter 객체 생성. 복사 생성자 호출 // Person에 작성된 깊은 복사 생성자 호출 // 복사 생성자 Person(Person&) 호출

	cout << "daughter 객체 생성 직후 ----" << endl;
	father.show(); // (3) father 객체 출력
	daughter.show(); // (3) daughter 객체 출력

	daughter.changeName("Grace"); // (4) daughter의 이름을 "Grace"로 변경
	cout << "daughter의 이름을 Grace로 변경한 후 ----" << endl;
	father.show(); // (5) father 객체 출력
	daughter.show(); // (5) daughter 객체 출력

	return 0; // (6) (7) daughter, father 객체 소멸 // daughter, father 순으로 소멸
}