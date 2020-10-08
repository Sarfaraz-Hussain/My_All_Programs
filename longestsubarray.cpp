#include <iostream>
using namespace std;

int isLong(int a[], int n, int sum)
{
	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		int curr_sum = 0;
		for (int j = i; j < n; ++j)
		{
			curr_sum = curr_sum + a[j];
			if (curr_sum == sum)
				res = max(res, j - i + 1);
		}

	}
	return res;
}

int main()
{
	int a[] = {1, 1, 1, 4};
	int sum = 4;
	int n = sizeof(a) / sizeof(a[0]);
	int ans = isLong(a, n, sum);
	cout << ans << endl;
	return 0;
}