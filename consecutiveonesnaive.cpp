#include <iostream>
using namespace std;

int maxones(int a[], int n)
{
	int res = 0;
	int j;
	for (int i = 0; i < n; i++)
	{
		int curr = 0;
		for (int j = i; j < n; j++)
		{
			if (a[j] == 1)
			{
				curr++;
			}
			else
				break;
		}
		i = j + 1;
		res = max(res, curr);
	}

	return res;
}

int main()
{
	int a[] = {1, 1, 0, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxones(a, n);
	cout << "maxones:" << ans << endl;
	return 0;
}