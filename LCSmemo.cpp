#include <iostream>
using namespace std;

#define MAX 24
#define NIL -1
int memo[MAX][MAX];

void _initilize()
{
	for (int i = 0; i < MAX; ++i)
	{
		for (int j = 0; j < MAX; ++j)
		{
			memo[i][j] = NIL;
		}
	}
}

int lCS(string s1, string s2, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (memo[m - 1][n - 1] != NIL)
		return memo[m - 1][n - 1];
	else
	{
		if (s1[m - 1] == s2[n - 1])
			memo[m - 1][n - 1] = 1 + lCS(s1, s2, m - 1, n - 1);
		else
			memo[m - 1][n - 1] = max(lCS(s1, s2, m - 1, n), lCS(s1, s2, m, n - 1));
	}
	return memo[m - 1][n - 1];
}

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	_initilize();
	cout << lCS(s1, s2, s1.length(), s2.length()) << endl;
	return 0;
}