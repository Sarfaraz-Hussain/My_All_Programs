#include<iostream>
#include <vector>
#include <queue>
using namespace std;

bool DFSrec(std::vector<int> adj[], int s, bool visited[], int parent)
{
	visited[s] = true;
	for (auto x : adj[s])
	{
		if (!visited[x])
		{
			if (DFSrec(adj, x, visited, s))
				return true;
		}
		else if (x != parent)
			return true;
	}
	return false;
}


bool DFS(std::vector<int> adj[], int V)
{
	int ans = 0;
	bool visited[V] = {false};
	for (int i = 0; i < V; ++i)
	{
		if (!visited[i])
			if (DFSrec(adj, i, visited, -1))
				return true;
	}
	return false;
}

void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);

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
	int ans = DFS(adj, V);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;

}