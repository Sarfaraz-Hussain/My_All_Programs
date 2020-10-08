//here will
#include <iostream>
#include<vector>
using namespace std;
std::vector<std::vector<int>> vec;

void dfs(int val)
{
	cout << val << " ";
	for (const int &node : vec[val])
	{
		dfs(node);
	}
}

int main()
{
	int u, v, N, E;
	cin >> N >> E;
	vec.resize(N + 1);
	// E--;
	while (E--)
	{
		cin >> u >> v;
		vec[u].push_back(v);
	}
	dfs(1);
	return 0;
}

