#include <bits/stdc++.h>
using namespace std;


int Equili(int a[], int n)
{
	if (n == 1)
		return n;
	if (n % 2 == 0)
	{
		int mid = n / 2;
		if (accumulate(a, a + mid, 0) == accumulate(a + mid + 1, a + n, 0))
			return mid + 1;
	}
	int mid = n / 2;
	if (accumulate(a, a + mid, 0) == accumulate(a + mid + 1, a + n, 0))
		return mid + 1;
	mid = n / 2 - 1;
	if (accumulate(a, a + mid, 0) == accumulate(a + mid + 1, a + n, 0))
		return mid + 1;
}

int main()
{
	int a[] = {1};
	int n = sizeof(a) / sizeof(a[0]);
	cout << Equili(a, n) << endl;
	return 0;
}