//juggling method
#include <iostream>
using namespace std;

int GCD(int n, int k)
{
	int temp;
	int j = 2;
	while (j <= n && j <= k)
	{
		if (n % j == 0 && k % j == 0)
			temp = j;
		j++;
	}
	return temp;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int n = sizeof(a) / sizeof(a[0]);
	int k = 3;
	int gcd = GCD(n, k);

	for (int i = 0; i < gcd; i++)
	{
		int temp = a[i];
		int j = i;
		while (j < n - k)
		{
			a[j] = a[j + k];
			j = j + k;
		}
		a[j + i] = temp;
	}
	for (int k = 0; k < n; k++)
		cout << a[k] << " ";
	cout << endl;
	return 0;
}