#include <iostream>
#include <algorithm>
using namespace std;

void MinCoin(int coins[], int n, int amount)
{
	sort(coins, coins + n, greater<int>());
	for (int i = 0; i < n; ++i)
	{
		if (amount >= coins[i])
		{
			int count = amount / coins[i];
			amount = amount % coins[i];
			cout << count << " coins of " << coins[i] << " RS" << endl;
		}
	}
}

int main()
{
	int a[] = {5, 10, 2, 1};
	int n = sizeof(a) / sizeof(a[0]);
	MinCoin(a, n, 52);
	return 0;
}