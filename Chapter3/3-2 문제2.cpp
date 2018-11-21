#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class printer
{
private:
	char a[30];
public:
	void SetString(const char*);								//문자열 저장
	void ShowString();											//문자열 출력
};

void printer::SetString(const char* str)
{
	strcpy(a, str);
}

void printer::ShowString()
{
	cout << a << endl;
}


int main()
{
	printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}