#include <iostream>
using namespace std;

void rotate(int a[], int n, int k)
{
	for (int i = 0; i < k; i++)
	{
		int key = a[0];
		int j = 1;
		for (j = 1; j < n; j++)
		{
			a[j - 1] = a[j];
		}
		a[j - 1] = key;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int k = 2;
	rotate(a, n, k);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	return 0;
}