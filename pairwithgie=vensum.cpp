#include <iostream>
using namespace std;

bool isfind(int a[], int n, int sum)
{
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (a[i] + a[j] == sum)
				return true;
		}
	}
	return false;
}

int main()
{
	int a[] = {3, 2, 8, 15, -8};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 18;
	int ans = isfind(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}