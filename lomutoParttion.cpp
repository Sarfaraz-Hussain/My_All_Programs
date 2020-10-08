#include <iostream>
using namespace std;

int lpartiton(int a[], int l, int h)
{
	int pivot = a[h]; //Always choose last as pivot for simplicity
	int i = l - 1;
	for (int j = l; j <= h - 1; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[j], a[i]);
		}
	}
	swap(a[i + 1], a[h]);
	return (i + 1);  // partioning index
}

int main()
{
	int a[] = {5, 2, 9, 8, 7, 4, 6};
	int n = sizeof(a) / sizeof(a[0]);
	int PI = lpartiton(a, 0, n - 1);
	for (int e : a)
		cout << e << " ";
	cout << endl;
	cout << PI << endl;
	return 0;
}