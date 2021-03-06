// This program solves Project Euler problem 2, even Fibonacci numbers

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int i1 = 1;
	int i2 = 1;
	int sum = 0;
	while (i2 < 4000000)
	{
		if ((i2 % 2) == 0)
		{
			sum += i2;
		}
		int temp = i2;
		i2 = i1 + i2;
		i1 = temp;
		cout << i2 << endl;
	}
	
	cout << "The solution is: " << sum;
}


