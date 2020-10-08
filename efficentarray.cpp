#include <iostream>
using namespace std;

int fun(int a[], int n)
{
	int res = 1;
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[res - 1])
		{
			a[res] = a[i];
			res++;
		}
	}
	return res;
}

int main()
{
	int a[] = {3, 4, 4, 4, 4, 5, 6, 6, 6, 7};
	int size = sizeof(a) / sizeof(a[0]);
	int res = fun(a, size);
	for (int i = 0; i < res; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}