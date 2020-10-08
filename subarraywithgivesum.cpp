#include <iostream>
using namespace std;

bool Issubaary(int a[], int n, int x)
{
	for (int i = 0; i < n; ++i)
	{

		int sum = a[i];
		if (sum == x)
			return true;
		for (int j = i - 1; j >= 0; --j)
		{
			sum = sum + a[j];
			if (sum == x)
				return true;

		}
	}
	return false;
}
int main()
{
	int a[] = {1, 2, 3};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 7;
	int ans = Issubaary(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}