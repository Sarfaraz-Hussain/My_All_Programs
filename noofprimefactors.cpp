#include <iostream>
using namespace std;

bool isPrime(int n)
{
	if (n == 1)
		return ;
	if (n == 2 || n == 3)
		return true;
	for (int i = 5; i * i < n; i++)
	{
		if (n % i == 0 || n % (i + 1) == 0)
			return false;
	}
	return true;

}

void primeFactors(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (n % i == 0)
				cout << i << " ";
		}
	}
}
int main()
{
	int n;
	cin >> n;
	primeFactors(n);
	return 0;
}