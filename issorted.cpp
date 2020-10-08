#include <iostream>
using namespace std;

bool isSorted(int a[], int n)
{
	if (n == 1)
		return true;
	if (a[0] < a[1])
	{
		for (int i = 1; i < n - 1; i++)
			if (a[i] > a[i + 1])
				return false;
	}
	else
	{
		for (int i = 1; i < n - 1; i++)
			if (a[i] < a[i + 1])
				return false;
	}
	return true;
}

int main()
{
	// int a[] = {2, 3, 4, 5, 6};
	int n;
	cin >> n;
	int a[n];
	int val;
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		a[i] = val;
	}
	// int n = sizeof(a) / sizeof(a[0]);
	int ans = isSorted(a, n);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}