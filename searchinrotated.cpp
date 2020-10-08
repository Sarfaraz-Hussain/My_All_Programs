#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		if (a[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int Rotatedearch(int a[], int low, int high, int x)
{
	int mid = (low + high) / 2;
	if (a[mid] == x)
		return mid;
	if (a[mid] > a[0])
	{
		if (x >= a[low] && x < a[mid])
		{
			return binarySearch(a, low, mid - 1, x);
		}
		else
		{

		}
	}
	else
	{
		if (x > a[mid] && x <= a[high])
		{
			return binarySearch(a, mid + 1, high, x);
		}
	}
	return -1;
}


int main()
{
	int a[] = {100, 200, 300, 400, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Rotatedearch(a, 0, n - 1, 1);
	cout << "Ans:" << ans << endl;
	return 0;
}