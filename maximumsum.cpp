#include <iostream>
using namespace std;

int maxmumsum(int a[], int n)
{
	int ans = a[1] - a[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; ++j)
		{
			ans = max(ans, a[j] - a[i]);
		}
	}
	return ans;
}

int main()
{
	int a[] = {2, 3, 10, 6, 4, 8, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxmumsum(a, n);
	cout << "the  maximum difference:" << ans << endl;
	return 0;
}