#include <iostream>
#include <unordered_set>
using namespace std;

bool ispair(int a[], int n, int x)
{
	unordered_set<int> s;
	int prefix_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		prefix_sum = prefix_sum + a[i];
		if (s.find(prefix_sum - x) != s.end())
			return true;
		if (prefix_sum == x)
			return true;
		s.insert(prefix_sum);
	}
	return false;
}

int main()
{
	int a[] = {3, 2, 5, 6};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 10;
	int ans = ispair(a, n, sum);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}