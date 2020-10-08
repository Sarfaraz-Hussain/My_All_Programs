#include <iostream>
using namespace std;

int countSetBits(int n)
{
	int count = 0;
	while (n)
	{
		if (n & 1)
			count++;
		n = n >> 1;
	}
	return count;
}

int count(int n)
{
	int res = 0;
	while (n) {
		if (n % 2 != 0)
			res++;
		n = n / 2;
	}
	return res;
}

int simple(int n)
{
	int res = 0;
	while (n)
	{
		res = res + (n & 1);
		n = n >> 1;
	}
	return res;
}

int main()
{
	int n;
	cin >> n;
	cout << simple(n) << endl;
	return 0;
}