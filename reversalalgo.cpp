#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{

	std::vector<int> v;
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt; ++i)
	{
		int n;
		cin >> n;
		v.push_back(n);
	}
	std::reverse(v.begin(), v.begin() + 2);
	std::reverse(v.begin() + 2, v.end());
	std::reverse(v.begin(), v.end());
	for (const auto&e : v)
		cout << e << " ";
	cout << "\n";
	return 0;

}