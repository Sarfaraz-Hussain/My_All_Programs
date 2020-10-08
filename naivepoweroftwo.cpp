#include <iostream>
using namespace std;

bool fun(int n)
{
	if (n == 0)
		return false;
	while (n != 1)
	{
		if (n % 2 != 0)
			return false;
		n = n / 2;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	int ans = fun(n);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}