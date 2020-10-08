#include <iostream>
using namespace std;

int lastocc(int a[], int n, int x)
{
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == x)
			return i;
	return -1;
}

int main()
{
	int a[] = {5, 10, 10, 10, 10, 20, 20};
	int size = sizeof(a) / sizeof(a[0]);
	int ans = lastocc(a, size, 10);
	cout << "Ans is:" << ans << endl;
	return 0;
}