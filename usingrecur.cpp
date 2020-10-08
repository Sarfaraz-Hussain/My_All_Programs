#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
	if (n == 0)
		return 0;
	else
		return countDigits(n / 10) + 1;
}

int main()
{
	int n;
	cin >> n;
	cout << "the number of digits:" << countDigits(n) << endl;
	return 0;
}