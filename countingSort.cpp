#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int a[], int n, int k)
{
	int count[k];
	for (int i = 0; i < k; ++i)
	{
		count[i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		count[a[i]]++;
	}
	int index = 0;
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < count[i]; ++j)
		{
			a[index] = i;
			index++;
		}
	}
}

int main()
{
	int a[] = {1, 4, 4, 1, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int k = *max_element(a, a + n);
	countingSort(a, n, k + 1);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}