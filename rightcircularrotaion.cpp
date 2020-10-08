#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int y = 0; y < n; y++)
	{
		int val;
		cin >> val;
		a[y] = val;
	}

	int k;
	cin >> k;
	int j;
	for (int i = 0; i < k; i++)
	{
		int temp = a[n - 1];
		for (j = n - 2; j >= 0; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}

	for (const auto&e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}