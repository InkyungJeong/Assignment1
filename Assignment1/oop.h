#pragma once
//assignment 1
class oop {
public:
	//constructor
	oop() {
		grade1 = 0;
		grade2 = 0;
		grade3 = 0;
		grade4 = 0;
	};
	oop(int a, int b, int c, int d);
	//operator overloading;
	oop operator+(oop& ref)
	{
		return oop(grade1 + ref.grade1, grade2 + ref.grade2, grade3 + ref.grade3, grade4 + ref.grade4);
	}
	//member data
	int grade1, grade2, grade3, grade4;
	//member funtion
	int total();
};
