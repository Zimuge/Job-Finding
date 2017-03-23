// test for type cast.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;


void char2int(char ch);
void int2char(int interger);

void uchar_multi_char();




int main()
{
	char a = 234;//  the really value of a is -22 in a;
	unsigned char c = 234;
	string str;
	int b = a;
	int d = c;
	unsigned int e = a;
	printf("%d\n", sizeof(45654464464));
	cout << typeid(234).name() << endl;
	cout << b << endl;
	cout << d << endl;
	cout << e << endl;
    return 0;
	getline(cin, str);
	
}

