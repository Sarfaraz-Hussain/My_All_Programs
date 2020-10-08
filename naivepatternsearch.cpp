#include <iostream>
using namespace std;

void naivepattern(string &txt, string &patt)
{
	int n = txt.length();
	int m = patt.length();
	if (m > n)
		return;
	int j;
	for (int i = 0; i <= n - m; ++i)
	{
		for ( j = 0; j < m; ++j)
		{
			if (patt[j] != txt[i + j])
				break;
		}
		if (j == m)
			cout << i << " ";
	}
}

int main()
{
	string txt = "ABCABCDABCD";
	string patt = "ABCD";
	naivepattern(txt, patt);
	cout << endl;
	return 0;
}