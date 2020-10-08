#include <iostream>
#include<algorithm>
using namespace std;


void merge(int a[], int b[], int m, int n)
{
	int c[m + n];
	int i;
	for ( i = 0; i < m; i++)
		c[i] = a[i];
	for (; i < m + n; i++)
		c[i] = b[i - m];
	sort(c, c + m + n);
	for (int x : c)
		cout << x << " ";
	cout << endl;
}

int main()
{
	int a[] = {10, 15, 20, 40};
	int m = sizeof(a) / sizeof(a[0]);
	int b[] = {5, 6, 6, 10, 15};
	int n = sizeof(b) / sizeof(b[0]);
	merge(a, b, m, n);
	return 0;
}