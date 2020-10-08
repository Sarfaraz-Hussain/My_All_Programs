#include <iostream>
#include <algorithm>
using namespace std;


void Rotate(int a[], int d, int n)
{
	rotate(a, a + d, a + n);
}


int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int d = 2;
	Rotate(a, d, n);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}