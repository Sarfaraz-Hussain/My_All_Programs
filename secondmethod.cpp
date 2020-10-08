#include <iostream>
using namespace std;

void leftrotate(int a[], int n, int d)
{
	int temp[d];
	int i, j;
	for (i = 0; i < d; i++)
		temp[i] = a[i];
	j = 0;
	for (; i < n; i++)
	{
		a[j] = a[i];
		j++;
	}
	j = 0;
	for (i = n - d; i < n; i++)
	{
		a[i] = temp[j];
		j++;
	}

}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size = sizeof(a) / sizeof(a[0]);
	leftrotate(a, size, 3);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}