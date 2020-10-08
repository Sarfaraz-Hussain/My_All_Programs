#include <bits/stdc++.h>
using namespace std;

int countDigits(long n)
{
	return floor(log10(n) + 1);
}

int main()
{
	int n;
	cin >> n;
	cout << "Number of digits:" << countDigits(n) << endl;
	return 0;
}