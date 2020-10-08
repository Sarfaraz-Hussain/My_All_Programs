#include <iostream>
using namespace std;

bool findpair(int a[], int n, int x)
{
	int i;
	for ( i = 0; i < n - 1; i++)
		if (a[i] > a[i + 1])
			break;
	int l = (i + 1) % n; //smallest index
	int r = i; //largest index

	while (l != r)
	{
		if (a[l] + a[r] == x)
			return true;
		if (a[l] + a[r] < x)
			l = (l + 1) % n;
		else
			r = (n + r - 1) % n;
	}
	return false;
}

int main()
{
	int a[] = {11, 15, 6, 8, 9, 10};
	int size = sizeof(a) / sizeof(a[0]);
	int x ;
	cin >> x;
	bool ans = findpair(a, size, x);
	if (ans == 1)
		cout << "Yes" << endl;
	else
		cout << "NO" << endl;
	return 0;
}