// 기본 타입 변수에 대한 참조 변수를 선언하고 사용하는 사례를 보인다. 실행결과는 무엇인가?
#include <iostream>
using namespace std;

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n; // 참조변수 refn 선언. refn은 n에 대한 별명
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; // p는 refn의 주소를 가짐. p는 n의 주소
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;

	return 0;
}