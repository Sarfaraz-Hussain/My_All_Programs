#include <iostream>
using namespace std;

int findGCD(int a, int b)
{
	int ans;
	int i = min(a, b);
	while (i)
	{
		if (a % i == 0 && b % i == 0) {
			ans = i;
			break;
		}
		i--;
	}
	return ans;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << "The GCD is " << findGCD(a, b) << endl;
	return 0;
}