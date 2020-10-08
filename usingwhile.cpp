#include <iostream>
using namespace std;

void fun(int a[], int n)
{
	int low = 0;
	int high = n - 1;
	int temp;
	while (low < high) {
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
		low++;
		high--;
	}
}

int main()
{
	int a[] = {3, 8, 9, 7};
	int n = sizeof(a) / sizeof(a[0]);
	fun(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
