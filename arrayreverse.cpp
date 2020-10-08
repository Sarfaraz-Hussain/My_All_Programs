#include <iostream>
using namespace std;

void arrayreverse(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
	{
		int temp;
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

int main()
{
	int a[] = {2, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);
	arrayreverse(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}