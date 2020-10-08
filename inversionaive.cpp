#include <iostream>
using namespace std;

int CountInversion(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int j = i + 1;
		while (j != n)
		{
			if (a[i] > a[j])
				count++;
			j++;
		}
	}
	return count;
}

int main()
{
	int a[] = {10, 20, 30, 40};
	int n = sizeof(a) / sizeof(a[0]);
	cout << CountInversion(a, n) << endl;
	return 0;
}