#include <iostream>
using namespace std;
#define NIL -1
#define MAX 100
// int bottomUp(int n)
// {
// 	int f[n + 1];
// 	f[0] = 0;
// 	f[1] = 1;
// 	for (int i = 2; i <= n; ++i)
// 	{
// 		f[i] = f[i - 1] + f[i - 2];
// 	}
// 	return f[n];
// }
// int memo[10] = { -1};
int memo[MAX];
void _initialize()
{
	for (int i = 0; i < MAX; ++i)
	{
		memo[i] = NIL;
	}
}

int topDown(int n)
{
	if (memo[n] == NIL)
	{
		int ans;
		if (n == 0 || n == 1)
			ans = n;
		else
			ans = topDown(n - 1) + topDown(n - 2);
		memo[n] = ans;
	}
	return memo[n];
}

int main()
{
	int n;
	cin >> n;
	_initialize();
	cout << topDown(n) << endl;
	return 0;
}