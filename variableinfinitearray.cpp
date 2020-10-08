#include <iostream>
using namespace std;


int BinarySearch(int a[], int x, int low, int high)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;
		if (a[mid] == x)
			return mid;
		else if (a[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int Findpos(int a[], int x)
{
	int i = 1;
	if (a[0] == x)
		return 0;
	while (a[i] < x)
		i = i * 2;
	if (a[i] == x)
		return i;
	return BinarySearch(a, x, i / 2 + 1, i - 1);
}

int main()
{
	int a[] = {1, 10, 15, 20, 40, 60, 80, 100, 200, 201, 205};
	int ans = Findpos(a, 100);
	cout << "Loc:" << ans << endl;
	return 0;
}