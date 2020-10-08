#include <iostream>
using namespace std;

int MaxCircularArray(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int curr_max = a[i];
		int curr_sum = a[i];
		for (int j = 1; j < n; j++)
		{
			int index = (i + j) % n;
			curr_sum += a[index];
			curr_max = max(curr_sum, curr_max);
		}
		ans = max(ans, curr_max);
	}
	return ans;
}

int main()
{
	int a[] = {10, 5, -5};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = MaxCircularArray(a, n);
	cout << "The max circular subarray sum:" << ans << endl;
	return 0;
}