#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> &e1, pair<int, int> &e2)
{
	return e1.second < e2.second;
}

int select(std::vector<pair<int, int>> vec)
{
	sort(vec.begin(), vec.end(), comp);
	stack<pair<int, int>> stk;
	stk.push(*(vec.begin()));
	for (auto it = vec.begin() + 1; it != vec.end(); it++)
	{
		if (it->first < stk.top().second)
			continue;
		else
			stk.push(*it);
	}
	return stk.size();
}


int main()
{
	std::vector<pair<int, int>> vec = {
		{2, 4},
		{1, 3},
		{10, 11},
		{3, 8}
	};
	cout << select(vec);
	return 0;
}