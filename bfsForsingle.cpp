#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(std::vector<int>adj[], int s, int V)
{
	bool visited[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	visited[s] = true;
	queue<int> q;
	q.push(s);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (auto x : adj[u])
			if (!visited[x]) {
				visited[x] = true;
				q.push(x);
			}
	}
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
	int s;
	cin >> s;
	BFS(adj, s, V);
	cout << endl;
	return 0;
}
