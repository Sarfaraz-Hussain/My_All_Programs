#include <iostream>
using namespace std;

int maxUnit(int a[], int n)
{
	int lmax[n];
	int rmax[n];
	lmax[0] = a[0];
	rmax[0] = a[0];
	int ans = 0;
	for (int i = 1; i < n; i++)
	{
		lmax[i] = max(lmax[i - 1], a[i]);
	}
	for (int i = 1; i < n; i++)
	{
		rmax[i] = max(rmax[i - 1], a[i]);
	}

	for (int i = 1; i < n - 1; i++)
	{
		ans += (min(lmax[i], rmax[i]) - 1);
	}
	return ans;
}

int main()
{
	int a[] = {3, 0, 1, 2, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxUnit(a, n);
	cout << "Max water is:" << ans << endl;
	return 0;
}