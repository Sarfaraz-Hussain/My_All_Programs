#include <iostream>
using namespace std;

int maxProfit(int profit[], int start, int end)
{
	if (end <= start)
		return 0;
	int Profit = 0;

	for (int i = start; i < end; i++)
	{
		for (int j = i + 1; j <= end; j++)
		{
			if (profit[j] > profit[i])
			{
				int curr_profit = profit[j] - profit[i] + maxProfit(profit, start, i - 1) + maxProfit(profit, j + 1, end);
				Profit = max(Profit, curr_profit);
			}
		}
	}
	return Profit;
}

int main()
{
	int profit[] = {1, 5, 3, 8, 12};
	int n = sizeof(profit) / sizeof(profit[0]);
	int ans = maxProfit(profit, 0, n - 1);
	cout << "The maximum profit is:" << ans << endl;
	return 0;
}