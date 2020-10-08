#include <iostream>
#include <set>
using namespace std;

int intersaction(int a[], int b[], int m, int n)
{
	set<int> s1(a, a + m);
	set<int> s2(b, b + n);
	int count = 0;
	for (auto x : s1)
		for (auto y : s2)
			if (x == y)
				count++;
	return count;
}

int main()
{
	int a[] = {1, 1, 1, 2, 3};
	int b[] = {1, 2, 3, 4};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	int ans = intersaction(a, b, m, n);
	cout << ans << endl;
	return 0;
}