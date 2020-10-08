#include <iostream>
using namespace std;

int Bs(int a[], int low, int high, int x)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;
	if (a[mid] == x)
		return mid;
	else if (a[mid] > x)
		return Bs(a, low, mid - 1, x);
	else
		return Bs(a, mid + 1, high, x);
}

int main()
{
	int a[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Bs(a, 0, n - 1, 40);
	cout << "Loc:" << ans << endl;
	return 0;
}