#include <iostream>
using namespace std;

void factorsofnumber(int n)
{
	int i;
	for (i = 1; i * i < n; i++)
		if (n % i == 0)
			cout << i << " ";
	if (n % 2 == 0)
		i = i - 1;
	for (; i >= 1; i--)
	{
		if (n % i == 0)
			cout << (n / i) << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	factorsofnumber(n);
	return 0;
}