#include <iostream>
using namespace std;

int maxunits(int a[], int n)
{
	int ans = 0;
	for (int i = 1; i < n - 1; i++)
	{
		int lmax = a[i];
		for (int j = 0; j < i; j++)
		{
			lmax = max(lmax, a[j]);
		}
		int rmax = a[i];
		for (int j = i + 1; j < n; j++)
		{
			rmax = max(rmax, a[j]);
		}
		ans += min(lmax, rmax) - a[i];

	}
	return ans;
}

int main()
{
	int a[] = {3, 0, 1, 2, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxunits(a, n);
	cout << "The max unit of water it can store is: " << ans << endl;
	return 0;
}