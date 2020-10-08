#include <iostream>
using namespace std;

int maxone(bool a[], int n)
{
	int res = 0;
	int curr = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			curr = 0;
		else
		{
			curr++;
			res = max(res, curr);
		}
	}
	return res;
}

int main()
{
	bool a[] = {1, 1, 1, 0, 0, 1};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = maxone(a, n);
	cout << "The max ones is:" << ans << endl;
	return 0;
}