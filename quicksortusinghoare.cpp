#include <iostream>
using namespace std;

int HoarePartition(int a[], int l, int h)
{
	int i = l - 1, j = h + 1;
	int pivot = a[l];
	while (true)
	{
		do
		{
			i++;
		} while (a[i] < pivot);

		do
		{
			j--;
		} while (a[j] > pivot);

		if (i >= j)
			return j;
		swap(a[i], a[j]);
	}
}

void QuickSort(int a[], int l, int h)
{
here:
	if (l < h)
	{
		int pi = HoarePartition(a, l, h);
		QuickSort(a, l, pi);
		// QuickSort(a, pi + 1, h);
		l = pi + 1;
		goto here;
	}
}


int main()
{
	int a[] = {8, 4, 7, 9, 3, 1, 10};
	int n = sizeof(a) / sizeof(a[0]);
	QuickSort(a, 0, n - 1);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}