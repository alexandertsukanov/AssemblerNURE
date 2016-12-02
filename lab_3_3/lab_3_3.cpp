#include <iostream>
using namespace std;

void main()				
{
	long	 A = 1, B = 3, C = 1, D = 180, E = 20;
	float	 Y = 0;

	__asm{ 
	finit; 
	fldpi;
	fmul E;
	fdiv D;
	fsin;
	fld B;
	fimul A;
	fadd;
	fld	ST; 
	fmul ST, ST; 
	fld1; 
	fsubr; 
	fsqrt;	
	fpatan; 
	fld1;
	fidiv B;
	fmul;
	fldpi;
	fdiv;    
	fimul D;
	fstp Y;

	}			

	cout << Y << "\n";
}

