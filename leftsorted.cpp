#include <iostream>
using namespace std;

int Search(int a[], int low, int high, int x)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		if (a[mid] > a[low])
		{
			if (x >= a[low] && x < a[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
		else
		{
			if (x > a[mid] && x <= a[high])
				low = mid + 1;
			else
				high = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int a[] = {100, 200, 300, 400, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = Search(a, 0, n - 1, 300);
	cout << "Ans:" << ans << endl;
	return 0;
}