#include <iostream>
using namespace std;

void reverse(int a[], int n)
{
	int low = 0;
	int high = n - 1;
	int temp;
	while (low < high)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int n = sizeof(a) / sizeof(a[0]);
	int d;
	cin >> d;
	reverse(a, n);
	// cin >> d;
	reverse(a, n - d);
	reverse(a + n - d, d);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}