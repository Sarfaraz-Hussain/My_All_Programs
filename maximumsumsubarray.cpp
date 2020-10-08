#include <iostream>
using namespace std;

int MaxSubaaraysum(int a[], int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		ans = max(ans, ans + a[i]);
	}
	return ans;
}

int main()
{
	int a[] = {2, 3, -8, 7, -1, 2, 3};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = MaxSubaaraysum(a, n);
	cout << "The max sub array sum:" << ans << endl;
	return 0;
}