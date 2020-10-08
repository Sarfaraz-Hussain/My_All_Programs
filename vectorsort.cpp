#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	std::vector<int> v = {5, 4, 7, 8, 2, 3, 5};
	sort(v.begin(), v.end(), greater<int>());
	for (const auto e : v)
		cout << e << " ";
	cout << endl;
	return 0;
}