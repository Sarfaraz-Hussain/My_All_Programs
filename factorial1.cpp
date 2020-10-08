#include <iostream>
using namespace std;

int fact(int n)
{
	int ans = 1;
	if (n == 0 || n == 1)
		ans = 1;
	else
	{
		for (int i = 0; i < n; i++)
		{
			ans = ans * (n - i);
		}
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << "factorial of " << n << " is " << fact(n) << endl;
	return 0;
}