// exp002.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>

using namespace std;

int main()
{
	char stra[] = "stra";
	char strb[] = { 's','t','r','b' };
	
	/* the code is buggy, the array's length 4 is shorter than "strc" whoes are 5 */
	//char strc[4] = "strc";

	char *pstr1 = "str1";
	char *pstr2 = "str2";
	char *pch = new char('a');
	cout << "stra ::" << stra << endl;
	cout << "strb ::" << strb << endl;
	cout << "pstr1 ::" << pstr1 << endl; 
	cout << "pstr2 ::" << pstr2 << endl;
	cout << pch << endl;

    return 0;
}

