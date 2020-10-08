#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int key)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;

	if (a[mid] == key)
		return mid;
	if (key > a[mid])
		return binarySearch(a, mid + 1, high, key);
	else
		return binarySearch(a, low, mid - 1, key);
}


int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int k;
	cin >> k;
	int n = sizeof(a) / sizeof(a[0]);
	int ans = binarySearch(a, 0, n - 1, k);
	cout << "Found at index:" << ans << endl;
	return 0;
}