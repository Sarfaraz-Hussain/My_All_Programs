#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void BFS(std::vector<int> adj[], int V, int indegree[])
{
	bool visited[V] = {false};
	queue<int> q;
	for (int i = 0; i < V; ++i)
	{
		if (indegree[i] == 0)
		{
			visited[i] = true;
			q.push(i);
		}
	}
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (const auto v : adj[u])
			if (!visited[v])
			{
				indegree[v]--;
				if (indegree[v] == 0)
				{
					visited[v] = true;
					q.push(v);
				}
			}
	}

}

void addEdge(std::vector<int> adj[], int u, int v, int indegree[])
{
	adj[u].push_back(v);
	indegree[v]++;
}

int main()
{
	int V, E;
	cin >> V >> E;
	int indegree[V] = {0};
	int u, v;
	std::vector<int> adj[V];
	while (E)
	{
		cin >> u >> v;
		addEdge(adj, u, v, indegree);
		E--;
	}
	BFS(adj, V, indegree);
	cout << endl;
	return 0;

}