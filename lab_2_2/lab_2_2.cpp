#include <iostream>
using namespace std;

int main()
{

	long X = 0;
	long S = 0;

	long answer;
	_asm{
	m1:	inc X;
		mov EAX, 9;
		mul X;
		mul X;
		mov S, EAX;
		mov EAX, 8;
		mul X;	
		sub S, EAX;		
		add S, 15;
		cmp S, 1000;
		jc m1;
	}
	
		cout << X << endl;

	return 0;
}
