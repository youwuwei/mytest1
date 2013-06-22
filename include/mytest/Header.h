
#ifndef MYHDR_DS
#define MYHDR _declspec(dllimport)
#else
#define MYHDR _declspec(dllexport)
#endif

MYHDR int Add11(int a, int b);

MYHDR int Rec(int a);
