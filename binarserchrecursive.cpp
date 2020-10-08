#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int x)
{
	int mid;
	int low = 0;
	int high = n - 1;
	for (int i = 0; i < n; i++)
	{
		mid = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		if (a[mid] > x)
			high = mid - 1;
		else
			low = low + 1;
	}
	return -1;
}

int main()
{
	int a[] = {10, 20, 30, 40, 50, 60};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = binarySearch(a, n, 30);
	cout << "The element at loc:" << ans << endl;
	return 0;
}