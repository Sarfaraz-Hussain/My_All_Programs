#include <iostream>
using namespace std;

int MaXSum(int a[], int n)
{
	int ans = a[0];
	for (int i = 0; i < n; ++i)
	{
		int curr = 0;
		for (int j = i; j < n; ++j)
		{
			curr = curr + a[j];
			ans = max(ans, curr);
		}
	}
	return ans;
}

int main()
{
	int a[] = {2, 3, -8, 7, -1, 3, 2};
	int n = sizeof(a) / sizeof(a[0]);
	cout << MaXSum(a, n) << endl;
	return 0;
}