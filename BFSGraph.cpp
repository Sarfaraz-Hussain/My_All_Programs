#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(std::vector<int> adj[], int V, int s)
{
	bool visited[V + 1];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	queue<int> q;
	visited[s] = true;
	q.push(s);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (auto x : adj[u])
		{
			if (!visited[x])
			{
				visited[x] = true;
				q.push(x);
			}
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
	int V = 5;
	std::vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 2);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	BFS(adj, V, 1);
	cout << endl;
	return 0;
}