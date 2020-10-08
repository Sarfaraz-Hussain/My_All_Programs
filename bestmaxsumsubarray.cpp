#include <iostream>
using namespace std;

int maxsumsubaary(int a[], int n)
{
	int ans = a[0];
	int curr = a[0];
	for (int i = 1; i < n; ++i)
	{
		curr = max(a[i], a[i] + curr);
		ans = max(ans, curr);
	}
	return ans;
}

int main()
{
	// int a[] = { -5, 1, -2, 3, -1, 2, -2};
	int n;
	cin >> n;
	int a[n];
	int val;
	// int n = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < n; ++i)
	{
		cin >> val;
		a[i] = val;
	}
	int ans = maxsumsubaary(a, n);
	cout << "max subarray sum is:" << ans << endl;
	return 0;
}