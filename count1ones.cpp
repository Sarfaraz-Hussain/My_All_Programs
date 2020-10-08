#include <iostream>
using namespace std;

int ones(bool a[], int low, int high)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] > 1)
			high = mid - 1;
		else if (a[mid] < 1)
			low = mid + 1;
		else if (mid == 0 || a[mid] != a[mid - 1])
			return mid;
		else
			high = mid - 1;
	}
	return -1;
}

int main()
{
	bool a[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1};
	int n = sizeof(a) / sizeof(a[0]);
	cout << (n - ones(a, 0, n - 1)) << endl;
	return 0;
}