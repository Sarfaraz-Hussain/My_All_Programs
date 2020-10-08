#include <iostream>
using namespace std;

int LomutoPartiton(int a[], int l, int h)
{
	int i = l - 1;
	int pivot = a[h];
	for (int j = l; j <= h - 1; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[h]);
	return (i + 1);
}

void QuichSort(int a[], int l, int h)
{
	if (l < h)
	{
		int PI = LomutoPartiton(a, l, h);
		QuichSort(a, l, PI - 1);
		QuichSort(a, PI + 1, h);
	}
}

int main()
{
	int a[] = {8, 4, 7, 9, 3, 10, 5};
	int n = sizeof(a) / sizeof(a[0]);
	QuichSort(a, 0, n - 1);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}