#include <iostream>
#include <unordered_set>
using namespace std;

bool isZero(int a[], int n)
{
	unordered_set<int> s;
	int prefix_sum = 0;
	for (int i = 0; i < n; ++i)
	{
		prefix_sum = prefix_sum + a[i];
		if (s.find(prefix_sum) != s.end())
			return true;
		if (prefix_sum == 0)
			return true;
		s.insert(prefix_sum);
	}
	return false;
}

int main()
{
	int a[] = {3, -2, -1, 4};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = isZero(a, n);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}