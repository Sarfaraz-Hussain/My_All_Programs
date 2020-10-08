#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void DFS(std::vector<int> adj[], int u, bool visited[], stack<int> &stk)
{
	visited[u] = true;
	for (auto v : adj[u])
		if (!visited[v])
		{
			DFS(adj, v, visited, stk);
		}
	stk.push(u);

}

void topological(std::vector<int> adj[], int V)
{
	bool visited[V] = {false};
	stack<int> stk;
	for (int i = 0; i < V; ++i)
	{
		if (!visited[i])
			DFS(adj, i, visited, stk);
	}
	while (!stk.empty())
	{
		cout << stk.top() << " ";
		stk.pop();
	}
}

void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
}


int main()
{
	int V, E;
	cin >> V >> E;
	std::vector<int> adj[V];
	int u, v;
	while (E)
	{
		cin >> u >> v;
		addEdge(adj, u, v);
		E--;
	}
	topological(adj, V);
	cout << endl;
	return 0;
}