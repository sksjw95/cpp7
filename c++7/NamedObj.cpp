#define  _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "NamedObj.h"



NamedObj::NamedObj(const char* s) {
	name = new char[strlen(s) + 1];
	strcpy(name,  s);
	id = ++nConstr;
}

NamedObj::~NamedObj() {
	++nDestr;
	delete[]name;
}

int NamedObj::nConstr = 0;
int NamedObj::nDestr = 0;