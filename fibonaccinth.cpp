#include <iostream>
#include <cmath>
using namespace std;

int fib(int n)
{
	double val = (1 + sqrt(5)) / 2;
	return lround(pow(val, n) / sqrt(5));
}

int main()
{
	int n;
	cin >> n;
	cout << fib(n) << endl;
	return 0;
}