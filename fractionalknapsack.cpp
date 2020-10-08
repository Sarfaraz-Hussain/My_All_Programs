#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> e1, pair<int, int> e2)
{
	return ((float)e1.first / e1.second > (float)e2.first / e2.second);
}

int kanpsack(std::vector<pair<int, int>> vec, int capacity)
{
	float ans = 0;
	sort(vec.begin(), vec.end(), comp);
	for (auto e : vec)
	{
		if (capacity >= e.second)
		{
			ans = ans + e.first;
			capacity = capacity - e.second;
		}
		else if (capacity > 0)
		{
			ans = ans + (float)(e.first / e.second) * capacity;
			break;
		}
	}
	return ans;
}

int main()
{
	int prices[] = {600, 500, 400};
	int weights[] = {50, 20, 30};
	int capacity = 70;
	std::vector<pair<int, int>> v;
	for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); ++i)
	{
		v.push_back(make_pair(prices[i], weights[i]));
	}
	cout << "benefit " << kanpsack(v, capacity) << endl;
	return 0;
}