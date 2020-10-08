#include <iostream>
#include <unordered_set>
using namespace std;

bool ispair(int a[], int n, int sum)
{
	unordered_set<int> s;
	for (int i = 0; i < n; ++i)
	{
		if (s.find(sum - a[i]) != s.end())
			return true;
		s.insert(a[i]);
	}
	return false;
}

int main()
{
	int a[] = {3, 2, 8, 15, -8};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 17;
	int ans = ispair(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}