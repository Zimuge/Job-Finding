#include "stdafx.h"
#include <iostream>



using namespace std;
extern int a;
int b = a;
void fun()
{
	a = 35;
	cout << a ;
}