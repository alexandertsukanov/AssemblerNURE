#include <iostream>
using namespace std;


	void main() {

		long x[9] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
		_asm {
			mov		EDX, 8; 
		m3: lea		EBX, x; 
		    mov		ECX, EDX; 
		m2: mov		EAX, dword ptr[EBX];
			add		EBX, 4
			cmp		EAX, dword ptr[EBX]; 
			jc		m1;
			xchg    dword ptr[EBX], EAX;
			mov		dword ptr[EBX - 4], EAX;
		m1:	loop	m2;
			dec		EDX;
			jnz		m3;
		}

		for (size_t i = 0; i < 9; i++)
		{
			cout << x[i] << " ";
		}
		cout << "\n";
	
}
