#include <iostream>
using namespace std;

int maxSum(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int curr = 0;
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum = sum + a[j];
			curr = max(curr, sum);
		}
		ans = max(ans, curr);
	}
	return ans;
}

int main()
{
	int a[] = {1, -2, 3, -1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxSum(a, n);
	cout << "max sum subarray:" << ans << endl;
	return 0;
}