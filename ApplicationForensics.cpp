
#include "stdafx.h"
#include <iostream>
#include <dos.h>
#include <windows.h>
using namespace std;
  
int main()
{
	cout << "Hello, World!";
	return 0;
}



void function_401000()
{
	DWORD eaxREG, ecxREG, edxREG, arg_0, arg_4, var_c, var_4,al,cx;
	BYTE var_5 = 0;
	while (true) {
		eaxREG = arg_0;
		eaxREG += var_4;
		*((char *)&ecxREG) = eaxREG;
		if (ecxREG == 0) {
			goto loc_401025;
		}
		else
		{
			++var_4;
			/*edxREG = var_4;
			edxREG++;
			var_4 = edxREG;*/
		}
	}
	loc_401025: eaxREG = var_4;
	eaxREG--;
	var_4 = eaxREG;
	var_c = 0;
	var_5 = 0xFF;
	while (true) {
		ecxREG = var_5;
		if (ecxREG == 0)
		{
			goto loc_40108A;
		}
		else
		{
			edxREG = arg_0;
			edxREG += arg_0;
			al = edxREG & 0xFF;
			al = var_5;
			ecxREG = var_5;
			edxREG = var_4;
			edxREG = edxREG & 0x80000003;
			if (edxREG < 0)
			{
				edxREG -= 1;
				edxREG = edxREG | 0xFFFFFFFC;
				edxREG += 1;
				continue;
			}
			eaxREG = edxREG+ 0x40a300;
			ecxREG = ecxREG ^ eaxREG & 0x7F;
			edxREG = var_c;
			eaxREG = arg_4;

			eaxREG = eaxREG + edxREG * 2;eaxREG= ecxREG & 0xFF;
			ecxREG = var_4;
			ecxREG -= 1;
			var_4 = ecxREG;
			++var_c;
		/*	edxREG = var_c;
			edxREG += 1;
			var_c = edxREG; */


		}
	}
	loc_40108A:
	exit(0);

}
