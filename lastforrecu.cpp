#include <iostream>
using namespace std;

int lastfind(int a[], int low, int high, int x)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;
	if (a[mid] > x)
		return lastfind(a, low, mid - 1, x);
	else if (a[mid] < x)
		return lastfind(a, mid + 1, high, x);
	else if (mid == 0 || a[mid] != a[mid + 1])
		return mid;
	else
		return lastfind(a, mid + 1, high, x);
}

int main()
{
	int a[] = {5, 10, 10, 10, 10, 20, 20};
	int size = sizeof(a) / sizeof(a[0]);
	int ans = lastfind(a, 0, size - 1, 10);
	cout << "the last occurence:" << ans << endl;
	return 0;
}