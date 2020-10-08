#include <iostream>
using namespace std;

void RBsearch(string &txt, string &pat)
{
	int n = txt.length();
	int m = pat.length();
	int h = 1;
	int q = 13;
	int d = 10;
	for (int i = 0; i <= m - 1; ++i)
	{
		h = (h * d) % q;       //d^m-1 is the calculation under modulo m to avoid overflow
	}
	int p = 0, t = 0;
	for (int i = 0; i < m; ++i)
	{
		p = (p * d + pat[i]) % q;
		t = (t * d + txt[i]) % q;
	}
	for (int i = 0; i <= n - m; ++i)
	{
		if (p == t)
		{
			bool flag = true;
			for (int j = 0; j < m; j++)
				if (pat[j] != txt[i + j])
				{
					flag = false;
					break;
				}
			if (flag)
				cout << i << " ";

		}
		if (i < n - m)
			t = ((t - txt[i] * h) * d + txt[i + m]) % q;
		if (t < 0)
			t = t + q;
	}

}

int main()
{
	string txt = "abdabcabc";
	string pat = "abc";
	RBsearch(txt, pat);
	cout << endl;
	return 0;
}