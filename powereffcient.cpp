#include <iostream>
using namespace std;

bool fun(int n)
{
	if (n == 0)
		return false;
	return ((n & (n - 1)) == 0);
}

int main()
{
	int n;
	cin >> n;
	int ans = fun(n);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}