#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[] = {2, 6, 1, 9, 7, 5, 8};
	int n = sizeof(a) / sizeof(a[0]);
	sort(a, a + n);
	for (int i : a)
		cout << i << " ";
	cout << endl;
	sort(a, a + n, greater <int>());
	for ( int e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}