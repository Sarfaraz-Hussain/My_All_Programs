#include <iostream>
using namespace std;

void InsertiomSort(int a[], int n)
{
	int key;
	int j;
	for (int i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

int main()
{
	int a[] = {50, 40, 30, 60, 10, 30};
	int n = sizeof(a) / sizeof(a[0]);
	InsertiomSort(a, n);
	for (int i : a)
		cout << i << " ";
	cout << endl;
	return 0;
}