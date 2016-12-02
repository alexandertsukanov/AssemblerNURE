#include <iostream>
using namespace std;

	int main()
	{

		long result[6];
		long N = 1;
		long P = 1;
		long answer;
		_asm{
			lea EBX, result;
			mov	ECX, 6;
		m1: mov EAX, 5;
			add EAX, N;
			mov EDI, EAX;
			mov EAX, 3;
			mul P;
			mov P, EAX;
			cdq;
			div EDI;
			shr EDI, 1;
			cmp	EDI, EDX;
			adc	EAX, 0;
			mov	dword ptr[EBX], EAX;
			add	EBX, 4;
			inc	N;
			loop m1;
		}
		for (int i = 0; i < 6; i++)
		{
			cout << result[i] << endl;
		}

		return 0;
	}

