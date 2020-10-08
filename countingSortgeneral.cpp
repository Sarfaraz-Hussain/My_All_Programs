#include <iostream>
#include<algorithm>
using namespace std;

void CountingSort(int a[], int n, int k)
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
	//modfied count array
	for (int i = 1; i < k; ++i)
	{
		count[i] = count[i - 1] + count[i];
	}

	int output[n];
	for (int i = n - 1; i >= 0; i--)
	{
		output[count[a[i]] - 1] = a[i];
		count[a[i]]--;
	}

	//copy  output array to the original array
	for (int i = 0; i < n; ++i)
	{
		a[i] = output[i];
	}
}

int main()
{
	int a[] = {1, 4, 4, 1, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int k = *max_element(a, a + n);
	CountingSort(a, n, k + 1);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}