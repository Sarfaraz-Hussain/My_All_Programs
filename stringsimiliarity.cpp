#include <iostream>
#include <vector>
using namespace std;

void similiar(string str, int n)
{
	string ans;
	for (int i = 0; i < n; ++i)
	{
		ans[i] = '0';
	}
	for (int i = 0; i < n; ++i)
	{
		std::vector<char> v(str.begin() + i, str.begin() + n);
		ans = ans ^ v;
	}
	cout << ans << endl;
}

int main()
{
	int t, n;
	string str;
	cin >> t;
	while (t)
	{
		cin >> n >> str;
		similiar(str, n);
		t--;
	}
	return 0;
}