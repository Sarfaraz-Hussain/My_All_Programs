#include <iostream>
using namespace std;

int findocc(int a[], int low, int high, int x, int n)
{
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
int main()
{
	int a[] = {5, 10, 10, 10, 10, 20, 20};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = findocc(a, 0, n - 1, 20, n);
	cout << "Ans is:" << ans << endl;
	return 0;
}