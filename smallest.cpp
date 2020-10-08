#include <iostream>
#include<cstdlib>
#include <algorithm>
using namespace std;

// int compare(const void * a, const void *b)
// {
// 	return (*(int*)a < * (int*)b);
// }

// int smallest(int a[], int n, int k)
// {
// 	qsort(a, n, sizeof(int), compare);
// 	return a[k];
// }

int smallest(int a[], int n, int k)
{
	sort(a, a + n, greater<int>());
	return a[k - 1];
}

int main()
{
	int a[] = {10, 5, 30, 12};
	int n = sizeof(a) / sizeof(a[0]);
	int k;
	cin >> k;
	cout << smallest(a, n, k) << endl;
	return 0;
}