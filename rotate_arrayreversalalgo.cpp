#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		a[i] = val;
	}
	int k;
	cin >> k;
	std::reverse(a, a + k);
	std::reverse(a + k, a + n);
	std::reverse(a, a + n);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}