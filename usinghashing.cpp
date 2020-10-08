#include <iostream>
#include <unordered_set>
using namespace std;

int Intersactin(int a[], int b[], int m, int n)
{
	unordered_set<int> s;
	for (int i = 0; i < m; ++i)
	{
		s.insert(a[i]);
	}
	int res = 0;

	for (int j = 0; j < n; ++j)
	{
		if (s.find(b[j]) != s.end())
		{
			res++;
			s.erase(b[j]);
		}
	}
	return res;
}

int main()
{
	int a[] = {10, 15, 20, 15, 30, 30, 5};
	int b[] = {30, 5, 30, 80};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	int ans = Intersactin(a, b, m, n);
	cout << ans << endl;
	return 0;
}