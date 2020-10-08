#include <iostream>
#include <unordered_set>
using namespace std;

int Uinon(int a[], int b[], int m, int n)
{
	unordered_set<int> s;
	for (int i = 0; i < m; ++i)
	{
		s.insert(a[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		s.insert(b[i]);
	}
	return s.size();
}

int main()
{
	int a[] = {1, 1, 1, 1, 1};
	int b[] = {5, 7, 1};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	int ans = Uinon(a, b, m, n);
	cout << ans << endl;
	return 0;
}