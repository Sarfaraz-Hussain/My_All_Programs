#include <iostream>
// #include <unordered_set>
#include <set>
#include <unordered_map>
using namespace std;

void CountFreq(int a[], int n)
{
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		s.insert(a[i]);
	}
	for (auto x : s)
	{
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (x == a[i])
			{
				count++;
			}

		}
		cout << x << " " << count << endl;
	}
}
int main()
{
	int a[] = {10, 12, 10, 15, 10, 20, 12, 12};
	int n = sizeof(a) / sizeof(a[0]);
	CountFreq(a, n);
	return 0;
}