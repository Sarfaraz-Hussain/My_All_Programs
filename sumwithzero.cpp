#include <iostream>
using namespace std;

bool isPair(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		int sum = a[i];
		for (int j = i - 1; j >= 0; --j)
		{
			sum = sum + a[j];
			if (sum == 0)
				return true;
		}
	}
	return false;
}

int main()
{
	int a[] = {1, 4, -3, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = isPair(a, n);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}