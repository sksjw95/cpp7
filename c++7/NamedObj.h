#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
#define  _CRT_SECURE_NO_WARNINGS
using namespace std;

class NamedObj {
	char* name;
	int id;
	static int nConstr; // 생성된 객체 수
	static int nDestr; // 소멸된 객체 수
public:
	NamedObj(const char* s); // 생성자
	~NamedObj(); // 소멸자
	void display() const {
		cout << "ID : " << id << " --> 이름: " << name << endl;

	}
	static int nObj() { // 존재하는 객체 수 반환
		return nConstr - nDestr;
	}
};

#endif // !NAMEDOBJ_H_INCLUDED

