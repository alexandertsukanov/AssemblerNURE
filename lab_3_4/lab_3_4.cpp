#include <iostream>
using namespace std;

void main()
{
	long	 A = 5, S = 10, T = 8, D = 180, E = 0;
	float	 Y = 0;

	__asm{
		mov ecx, 7;
		finit;	
		fldz;

m1:		fild S;
		fadd    ST, ST(1);
		fild T;
		faddp   ST(2), ST;	
		fldpi;
		fmul;
		fidiv D;
		fsin;		
		fild A;
		fyl2x;	
		fld	   ST(0);
		frndint;
		fsub   ST(1), ST(0);
		fxch;
		f2xm1;
		fld1;
		fadd;
		fscale;
		fstp Y;
		fstp E;
		loop m1;
	}

	cout << Y << "\n";
}