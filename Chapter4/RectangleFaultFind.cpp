#include <iostream>
#include "Rectangle.h"
using namespace std;

//point.cpp
//Rectangle.cpp
//RectangleFaultFind.cpp
//point.h
//Rectangle.h
//위의 것들은 서로 한꺼번에 실행

int main()
{
	/*point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "초기화 실패" << endl;
	if (!pos1.InitMembers(2, 4))
		cout << "초기화 실패" << endl;

	point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "초기화 실패" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos2,pos1))
		cout << "직사각형 초기화 실패" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 실패" << endl;
		*/

	Rectangle rec(1, 1, 5, 5);
	rec.ShowRecInfo();

	return 0;
}