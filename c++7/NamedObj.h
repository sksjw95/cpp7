#ifndef NAMEDOBJ_H_INCLUDED
#define NAMEDOBJ_H_INCLUDED
#include <iostream>
#define  _CRT_SECURE_NO_WARNINGS
using namespace std;

class NamedObj {
	char* name;
	int id;
	static int nConstr; // ������ ��ü ��
	static int nDestr; // �Ҹ�� ��ü ��
public:
	NamedObj(const char* s); // ������
	~NamedObj(); // �Ҹ���
	void display() const {
		cout << "ID : " << id << " --> �̸�: " << name << endl;

	}
	static int nObj() { // �����ϴ� ��ü �� ��ȯ
		return nConstr - nDestr;
	}
};

#endif // !NAMEDOBJ_H_INCLUDED

