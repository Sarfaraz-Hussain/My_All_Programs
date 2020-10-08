#include <iostream>
#include <cmath>
using namespace std;

void RabinKarp(string &txt, string &patt, int d)
{
	int n = txt.length();
	int m = patt.length();
	int p = 0, t = 0;
	for (int i = 0; i < m; ++i)
	{
		t = t + txt[i] * pow(d, m - 1 - i);
		p = p + patt[i] * pow(d, m - i - 1);
	}
	for (int i = 0; i <= n - m; i++)
	{
		int j = 0;
		if (p == t)
			for (j = 0; j < m; j++)
				if (patt[j] != txt[i + j])
					break;
		if (j == m)
			cout << i << " ";
		t = (t - txt[i] * pow(d, m - 1)) * d + txt[i + m];
	}
}

int main()
{
	string txt = "abdabcbabc";
	string patt = "abc";
	RabinKarp(txt, patt, 5);
	cout << endl;
	return 0;
}