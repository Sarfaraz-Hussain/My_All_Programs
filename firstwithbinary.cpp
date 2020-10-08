#include <iostream>
using namespace std;

int finocc(int a[], int low, int high, int x)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;
	if (a[mid] > x)
		return finocc(a, low, mid - 1, x);
	else if (a[mid] < x)
		return finocc(a, mid + 1, high, x);
	if (mid == 0 || a[mid - 1] != a[mid])
		return mid;
	else
		return finocc(a, low, mid - 1, x);
}

int main()
{
	int a[] = {1, 10, 10, 20, 20, 30};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = finocc(a, 0, n - 1, 20);
	cout << "Ans is:" << ans << endl;
	return 0;
}