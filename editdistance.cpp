#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int eD(string s1, string s2, int m, int n)
{
	if (m == 0)
		return n;
	if (n == 0)
		return m;
	if (s1[m - 1] == s2[n - 1])
		return eD(s1, s2, m - 1, n - 1);
	else
		return (1 + min(eD(s1, s2, m, n - 1), eD(s1, s2, m - 1, n), eD(s1, s2, m - 1, n - 1)));
}

int main()
{
	string s1 = "CAT";
	string s2 = "CUT";
	cout << eD(s1, s2, s1.length(), s2.length()) << endl;
	return 0;
}