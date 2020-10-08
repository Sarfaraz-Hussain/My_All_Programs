#include <iostream>
using namespace std;


void countingSort(int a[], int n, int exp)
{
	int count[10], output[n];

	for (int i = 0; i < 10; ++i)
	{
		count[i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		count[(a[i] / exp) % 10]++;
	}
	//modified count arrays
	for (int i = 1; i < 10; ++i)
	{
		count[i] = count[i - 1] + count[i];
	}

	for (int i = n - 1; i >= 0; i--)
	{
		output[count[(a[i] / exp) % 10] - 1] = a[i];
		count[(a[i] / exp) % 10]--;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i] = output[i];
	}
}

void RadixSort(int a[], int n)
{
	int mx = a[0];
	for (int i = 1; i < n; i++)
		if (a[i] > mx)
			mx = a[i];
	for (int exp = 1; mx * exp / 10 > 0; exp = exp * 10)
	{
		countingSort(a, n, exp);
	}
}



int main()
{
	int a[] = {319, 212, 6, 8, 100, 50};
	int n = sizeof(a) / sizeof(a[0]);
	RadixSort(a, n);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}