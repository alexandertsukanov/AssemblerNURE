#include <iostream>
using namespace std;

void main()				
{
	float	 A = 3.5;		
	long	 B = 2, X = 0, C = 100, D = 10, answer = 0;

	__asm{
		finit;
		fld1; 
		fldz; 
m1:     inc		X; 
		fld		A; 
		fmulp		ST(2), ST; 
		fild		B;
		fmul		ST, ST(2);		 		
		fiadd		D; 	
		fsqrt;
		fist		answer;	
		ficomp		C;
		fstsw	AX;
		sahf;
		jc		m1;
	}			

	cout << X << "\n" << answer << "\n";
}
