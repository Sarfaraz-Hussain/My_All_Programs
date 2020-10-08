#include <iostream>
#include <vector>
#include <queue>
using namespace std;


bool KahnBFS(std::vector<int> adj[], int V, int indegree[])
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
	int count = 0;
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		count++;
		for (auto v : adj[u])
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
	return (count != V);
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
	std::vector<int> adj[V];
	int u, v;
	while (E)
	{
		cin >> u >> v;
		addEdge(adj, u, v, indegree);
		E--;
	}
	int ans = KahnBFS(adj, V, indegree);
	if (ans)
		cout << "Cyclic" << endl;
	else
		cout << "Acyclic" << endl;
	return 0;

}