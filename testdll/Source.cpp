#include "stdafx.h"
#include "mytest\Header.h"

MYHDR int Add11(int a, int b)
{
	// add a and b
	return a + b;
}

MYHDR int Rec(int a)
{
	if (a > 4)
	{
		return a;
	}
	return Rec(a + 2);
}
