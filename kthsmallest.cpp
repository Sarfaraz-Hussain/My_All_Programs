#include <iostream>
using namespace std;

int partition(int a[], int l, int r)
{
	int i = l - 1;
	int pivot = a[r];
	for (int j = l; j <= r - 1; j++)
		if (a[j] < pivot)
		{
			i++;
			swap(a[j], a[i]);
		}
	swap(a[i + 1], a[r]);
	return (i + 1);
}

int smallest(int a[], int l, int r, int k)
{
	while (l <= r)
	{
		int pi = partition(a, l, r);
		if (pi == k - 1)
			return pi;
		else if (pi > k - 1)
			r = pi - 1;
		else
			l = pi + 1;
	}
}

int main()
{
	int a[] = {4, 3, 2, 7, 6, 9};
	int n = sizeof(a) / sizeof(a[0]);
	int k;
	cin >> k;
	int index = smallest(a, 0, n - 1, k);
	cout << k << "th samllest no is " << a[index] << endl;
	return 0;
}