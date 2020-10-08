#include <iostream>
using namespace std;

void InsertionSort(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}

int main()
{
	int a[] = {4, 3, 2, 7, 6, 8};
	int n = sizeof(a) / sizeof(a[0]);
	InsertionSort(a, n);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}