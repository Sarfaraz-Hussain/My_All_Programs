#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<int> s;
	int a[] = {2, 3, 4, 5, 5, 6, 7, 7, 7};
	int n = sizeof(a) / sizeof(a[0]);
	// s(a, a + n);
	for (int i = 0; i < n; ++i)
	{
		s.insert(a[i]);
	}
	cout << s.size() << endl;
	return 0;
}