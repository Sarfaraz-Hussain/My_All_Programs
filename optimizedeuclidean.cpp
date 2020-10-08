#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return findGCD(b, a % b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << "GCD:" << findGCD(a, b) << endl;
	return 0;
}