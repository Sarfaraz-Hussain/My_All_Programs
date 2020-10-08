#include <iostream>
#include<set>
// #include<algorithm>
using namespace std;

int main()
{
	int a[] = {1, 2, 2, 2, 3, 4, 5, 5, 6, 6, 7, 8, 8};
	int n = sizeof(a) / sizeof(a[0]);
	set<int> s(a, a + n);
	for (const auto i : s)
		cout << i << " ";
	cout << endl;
	return 0;
}