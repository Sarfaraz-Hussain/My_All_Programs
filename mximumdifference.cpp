#include <iostream>
using namespace std;

int maximumDiffer(int a[], int n)
{
	int ans = a[1] - a[0];
	int min_val = a[0];
	for (int j = 1; j < n; j++)
	{
		ans = max(ans, a[j] - min_val);
		min_val = min(min_val, a[j]);
	}
	return ans;
}

int main()
{
	int a[] = {2, 3, 10, 6, 4, 8, 3};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maximumDiffer(a, n);
	cout << "The max difference is: " << ans << endl;
	return 0;
}