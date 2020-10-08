#include <iostream>
using namespace std;
int fisrtoccur(int a[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] > x)
			high = mid - 1;
		else if (a[mid] < x)
			low = mid + 1;
		else if (mid == 0 || a[mid] != a[mid - 1])
			return mid;
		else
			high = mid - 1;
	}
	return -1;
}

int lastoccur(int a[], int low, int high, int x)
{
	int n = high + 1;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] > x)
			high = mid - 1;
		else if (a[mid] < x)
			low = mid + 1;
		else if (mid == n - 1 || a[mid] != a[mid + 1])
			return mid;
		else
			low = mid + 1;
	}
	return -1;
}

int Freqquency(int a[], int low, int high, int x)
{
	int first = fisrtoccur(a, low, high - 1, x);
	if (first == -1)
		return 0;
	else return (lastoccur(a, low, high - 1, x) - first + 1);
}
int main()
{
	int a[] = {1, 2, 10, 10, 10, 10n, 20, 20};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Freqquency(a, 0, n - 1, 10);
	cout << "Freqquency is:" << ans << "\n";
	return 0;
}