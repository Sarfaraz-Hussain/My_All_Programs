#include <iostream>
using namespace std;

int FindOccu(int a[], int n, int x)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == x)
			return i;
	}
	return -1;
}

int main()
{
	int a[] = {1, 10, 10, 10, 20, 20, 40};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = FindOccu(a, n, 20);
	cout << "Loc:" << ans << endl;
	return 0;
}