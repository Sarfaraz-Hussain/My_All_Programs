#include <iostream>
using namespace std;

int overridden(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= 1 && a[i] <= n)
			continue;
		else
			return (i + 1);
	}
	return -1;
}

int main()
{
	int a[] = {5, 2, 1, 100, 3};
	int n = sizeof(a) / sizeof(a[0]);
	cout << overridden(a, n) << endl;
	return 0;
}