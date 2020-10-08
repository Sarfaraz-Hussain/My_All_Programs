#include <iostream>
using namespace std;

int alternatearray(int a[], int n)
{
	int curr = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 0 && a[i - 1] % 2 == 1) || (a[i] % 2 == 1 && a[i - 1] % 2 == 0))
		{
			curr++;
			ans = max(ans, curr);
		}
		else
			curr = 1;
	}
	return ans;
}

int main()
{
	int a[] = {5, 10, 20, 6, 3, 8, 3, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = alternatearray(a, n);
	cout << "The max value:" << ans << endl;
	return 0;
}