#include <iostream>
#include "NamedObj.h"
#define  _CRT_SECURE_NO_WARNINGS
using namespace std;

void f() {
	NamedObj x("Third");
	x.display();
}

int main() {
	cout << "NamedObj Ŭ������ ��ü �� : "
		<< NamedObj::nObj() << endl;
	NamedObj a("First");
	NamedObj b("Second");
	a.display();
	b.display();
	f();
	NamedObj c("Fourth");
	c.display();
	cout << "NamedObj Ŭ������ ��ü �� : "
		<< NamedObj::nObj() << endl;
	return 0;
}