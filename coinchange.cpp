#include <iostream>
using namespace std;

int ways(int coins[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (n == 0)
		return 0;
	int ans = ways(coins, n - 1, sum);
	if (coins[n - 1] <= sum)
		ans = ans + ways(coins, n , sum - coins[n - 1]);
	return ans;
}

int main()
{
	int coins[] = {2, 5, 3, 6};
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum;
	cin >> sum;
	cout << ways(coins, n, sum) << endl;
	return 0;
}