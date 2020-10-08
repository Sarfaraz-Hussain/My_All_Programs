#include <iostream>
using namespace std;

int maxans(int a[], int n)
{
	int ans1 = 0, ans2 = 0;
	int curr1 = 0, curr2 = 0;

	int i;
	for (i = 0; i < n - 1; i++)
	{
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 1)
		{
			curr1 += 2;
			ans1 = max(curr1, ans1);
			goto here;
		}

		if (a[i] % 2 == 1 && a[i + 1] % 2 == 0)
		{
			curr2 += 2;
			ans2 = max(ans2, curr2);
		}
here:
		i++;

	}
	if (a[i] % 2 == 0)
		ans1 += 1;
	else
		ans2 += 1;
	// return max(ans2, ans1);
	int ans = max(ans1, ans2);
	return ans;
}

int main()
{
	int a[] = {10, 12, 14, 7, 8, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxans(a, n);
	cout << "Max length:" << ans << endl;
	return 0;
}