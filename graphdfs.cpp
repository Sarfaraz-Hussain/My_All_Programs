#include <iostream>
#include<stack>
#include<vector>
using namespace std;
std::vector<std::vector<int>> vec;
std::vector<bool> visited;

void dfs_r(int s)
{
	visited[s] = true;
	cout << s << " ";
	for (int i = 0; i < vec[s].size(); ++i)
	{
		if (visited[vec[s][i]] == false)
			dfs_r(vec[s][i]);
	}
}
void dfs(const vector<vector<int>> &vec, int s)
{
	stack<int> Stk;
	Stk.push(s);
	visited[s] = true;
	while (!Stk.empty())
	{
		int node = Stk.top();
		Stk.pop();
		cout << "visited: " << node << " ";
		for (int i = 0; i < vec[node].size(); ++i)
		{
			if (!visited[vec[node][i]])
			{
				Stk.push(vec[node][i]);
				visited[vec[node][i]] = true;
			}

		}
	}
}

void initialize()
{
	for (int i = 0; i < visited.size(); i++)
		visited[i] = false;
}

int main()
{
	int nodes, edges, x, y;
	cin >> nodes >> edges;
	vec.resize(nodes + 1);
	visited.resize(nodes + 1);

	for (int i = 0; i < edges; i++)
	{
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	initialize();
	dfs_r(1);
	cout << endl;
	initialize();
	dfs(vec, 1);
	cout << endl;
	return 0;

}