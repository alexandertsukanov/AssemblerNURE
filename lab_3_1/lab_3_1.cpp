#include <iostream>
using namespace std;


void main() {

	float	 A = 4.5;		
	long  B = 5,  N = 0;
	float O;

	__asm{ 
	mov ecx, 6;
	finit;
	fld1;
	 
m1:   	inc N;
	     fld A;
	     fmulp ST(1), ST;		 
		 fild B;
	     fiadd N;	
		 fdivr	ST, ST(1);
		 frndint;
		 fstp O;		
		 loop m1;		
	}			
	cout << O << "\n";
}



