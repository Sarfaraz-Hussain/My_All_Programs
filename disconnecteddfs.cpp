#include <iostream>
#include <vector>
using namespace std;



void DFSrec(std::vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	cout << s << " ";
	for (const auto x : adj[s])
		if (!visited[x])
			DFSrec(adj, x, visited);
}


void DFS(std::vector<int> adj[], int V)
{
	bool visited[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	for (int i = 0; i < V; ++i)
	{
		if (!visited[i])
			DFSrec(adj, i, visited);
	}
}


void addEdge(std::vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}


int main()
{
	int V;
	cin >> V;
	std::vector<int> adj[V];
	int u, v;
	int t = V;
	while (t)
	{
		cin >> u >> v;
		addEdge(adj, u, v);
		t--;
	}
	DFS(adj, V);
	cout << endl;
	return 0;
}
