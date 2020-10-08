#include <iostream>
using namespace std;

void RabinKarp(string &txt, string &patt)
{
	int n = txt.length();
	int m = patt.length();
	int p = 0, t = 0;
	for (int i = 0; i < m; ++i)
	{
		t = t + txt[i];
		p = p + patt[i];
	}

	for (int i = 0; i <= n - m; ++i)
	{
		int j = 0;
		if (p == t)
			for (j = 0; j < m; j++)
				if (patt[j] != txt[i + j])
					break;
		if (j == m)
			cout << i << " ";
		t = t + txt[i + m] - txt[i];
	}

}

int main()
{
	string txt = "abdabcbabc";
	string patt = "abc";
	RabinKarp(txt, patt);
	return 0;
}