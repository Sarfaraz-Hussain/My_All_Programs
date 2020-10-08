#include <iostream>
using namespace std;

int FindPeak(int a[], int n)
{
	if (n == 1)
		return a[0];
	if (a[n - 1] >= a[n - 2])
		return a[n - 1];
	for (int i = 1; i <= n - 2; i++)
	{
		if (a[i] >= a[i - 1] && a[i] >= a[i + 1])
			return a[i];
	}
}

int main()
{
	int a[] = {5, 20, 40, 30, 20, 50, 10};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = FindPeak(a, n);
	cout << "Peak:" << ans << endl;
	return 0;
}