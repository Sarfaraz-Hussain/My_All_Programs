#include <iostream>
using namespace std;

int Search(int a[], int low, int high, int key)
{
	if (low > high)
		return -1;
	int mid = (low + high) / 2;
	if (a[mid] == key)
		return mid;

	if (a[low] <= a[mid])  //now lets search in sorted array
	{
		if (key >= a[low] && key <= a[mid])
			return Search(a, low, mid - 1, key);
		return Search(a, mid + 1, high, key);
	}
	if (key >= a[mid] && key <= a[high])
		return Search(a, mid + 1, high, key);
}


int main()
{
	int a[] = {3, 4, 5, 1, 2};
	int n = sizeof(a) / sizeof(a[0]);
	int key;
	cout << "Enter the key to search:";
	cin >> key;
	int ans = Search(a, 0, n - 1, key);
	if (ans != -1)
		cout << "Found at:" << ans << endl;
	else
		cout << "Not Found!" << "\n";
	return 0;
}