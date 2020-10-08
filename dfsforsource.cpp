#include <iostream>
#include <vector>
using namespace std;

void DFSrec(std::vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";
	for (const auto x : adj[s])
	{
		if (!visited[x])
			DFSrec(adj, x, visited);
	}
}

void DFS(std::vector<int> adj[], int V, int s)
{
	bool visited[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	DFSrec(adj, s, visited);
}

void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

int main()
{
	int V, u, v;
	cin >> V;
	std::vector<int> adj[V];
	int t = V;
	while (t)
	{
		cin >> u >> v;
		addEdge(adj, u, v);
		t--;
	}

	int s;
	cin >> s;
	DFS(adj, V, s);
	cout << endl;
	return 0;
}