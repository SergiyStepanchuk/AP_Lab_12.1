// Lab_12_1
#include <iostream>
using namespace std;

struct S {
	S* p[2];
	int num;
};

void main() {
	S* p = new S();
	p->num = 1;

	p->p[0] = new S();
	p->p[0]->num = 4;
		p->p[0]->p[1] = nullptr;
		p->p[0]->p[0] = new S();
		p->p[0]->p[0]->num = 3;
			p->p[0]->p[0]->p[1] = nullptr;
			p->p[0]->p[0]->p[0] = new S();
			p->p[0]->p[0]->p[0]->num = 2;
				p->p[0]->p[0]->p[0]->p[1] = p->p[0]->p[0];
				p->p[0]->p[0]->p[0]->p[0] = p;
	p->p[1] = p->p[0]->p[0]->p[0];

	delete p->p[0]->p[0]->p[0];
	delete p->p[0]->p[0];
	delete p->p[0];
	delete p;
}