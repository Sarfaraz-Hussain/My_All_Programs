#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	int i = 2;
	int divisor = 1;
	while (i <= n1 && i <= n2)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			divisor = i;
		}
		i++;
	}
	cout << "The GCD is: " << divisor << endl;
	return 0;
}