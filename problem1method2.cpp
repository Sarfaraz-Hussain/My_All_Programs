#include <iostream>
using namespace std;

void rotate(int a[], int n, int k)
{
	int b[k];
	for (int i = 0; i < k; i++)
		b[i] = a[i];
	int j;
	for (j = k; j < n; j++)
	{
		a[j - k] = a[j];
	}
	int y = 0;
	for (int t = j - k; t < n; t++)
	{
		a[t] = b[y];
		y++;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int k = 2;
	rotate(a, n, k);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
	return 0;
}