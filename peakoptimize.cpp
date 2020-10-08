#include <iostream>
using namespace std;

int Findpeak(int a[], int low, int high, int n)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if ((mid == 0 || a[mid - 1] <= a[mid]) && (mid == n - 1 || a[mid + 1] <= a[mid]))
			return a[mid];
		if (mid > 0 && a[mid - 1] >= a[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;

}

int main()
{
	int a[] = {5, 20, 40, 30, 20, 50, 30};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Ans:" << Findpeak(a, 0, n - 1, n) << endl;
	return 0;
}