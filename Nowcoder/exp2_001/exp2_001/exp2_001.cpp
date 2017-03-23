// exp2_001.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include<iostream>

#include<vector>

#include<stack>

using namespace std;

int main()
{
	int multi_value1 = 1;
	int multi_value2 = 1;
	int val;
	int isBanlance = false;
	vector<int> bit_val;
	cin >> val;
	if (val < 10)
	{
		cout << "NO" << endl;
		return 0;
	}
	while (val >= 10)
	{
		bit_val.push_back(val % 10);
		val /= 10;
	}
	bit_val.push_back(val);
	int n = bit_val.size();
	for (int i = 0; i < n - 1; i++)
	{
		multi_value1 *= bit_val[i];
		multi_value2 = 1;
		for (int j = i + 1; j < n; j++)
		{
			multi_value2 *= bit_val[j];
		}
		if (multi_value1 == multi_value2)
		{
			cout << "YES" << endl;
			return 0;
		}
	}


	cout << "NO" << endl;
	return 0;

}
