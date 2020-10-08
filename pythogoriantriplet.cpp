#include <iostream>
using namespace std;

bool Findpythagorian(int a[], int n)
{
	int left;
	int right;
	for (int i = 0; i < n; ++i)
	{
		left = i + 1;
		right = n - 1;
		while (left < right)
		{
			if (a[i]*a[i] + a[left]*a[left] == a[right]*a[right])
				return true;
			else if (a[i]*a[i] + a[left]*a[left] > a[right]*a[right])

			}
	}
} n