#include <iostream>
using namespace std;

int bsd(int a[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] > x)
			high = mid - 1;
		else if (a[mid] < x)
			low = mid + 1;
		else if (mid == 0 || a[mid - 1] != a[mid])
			return mid;
		else
			high = mid - 1;
	}
	return -1;
}

int main()
{
	int a[] = {1, 2, 2, 3, 4, 5, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = bsd(a, 0, n - 1, 4);
	cout << "The ans is:" << ans << endl;
	return 0;
}