#include <iostream>
using namespace std;

int removedupli(int a[], int n)
{
	int temp[n];
	temp[0] = a[0];
	int res = 1;
	for (int j = 1; j < n; j++)
	{
		if (temp[res - 1] != a[j])
		{
			temp[res] = a[j];
			res++;
		}
	}
	for (int i = 0; i < res; i++)
		a[i] = temp[i];
	return res;
}

int main()
{
	int a[] = {2, 3, 3, 3, 4, 5, 5, 6, 6, 6, 7, 8};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "size:" << removedupli(a, n) << endl;
	return 0;
}
