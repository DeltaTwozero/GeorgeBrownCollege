#include "stdafx.h"
#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	int opt;
	Functions *f = new Functions();
	do {
		opt = f->Menu();
		switch (opt)
		{
		case 1:
			f->Function1();	break;
		case 2:
			f->Function2();	break;
		case 3:
			f->Function3();	break;
		case 4:
			f->Function4();	break;
		case 5:
			f->Function5();	break;
		}
	} while (opt != 0);
}