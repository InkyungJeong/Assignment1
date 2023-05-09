#include "oop.h"

oop::oop(int a, int b, int c, int d) {
	grade1 = a;
	grade2 = b;
	grade3 = c;
	grade4 = d;
}
int oop::total() {
	int x = grade1 + grade2 + grade3 + grade4;
	return x;
}