#include <iostream>
#include "oop.h"
using namespace std;

int main() {
	oop A, B, C, D;
	A = oop(100, 50, 3, 4);
	B = oop(0, 45, 2, 4);
	C.grade1 = A.grade1 + B.grade1;
	C.grade2 = A.grade2 + B.grade2;
	C.grade3 = A.grade3 + B.grade3;
	C.grade4 = A.grade4 + B.grade4;
	cout << "A = " << A.total() << endl;
	cout << "B = " << B.total() << endl;
	cout << "C = " << C.total() << endl;

	D = A + B;
	cout << "D = " << D.total() << endl;
}