#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFSalgo(std::vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	queue<int> q;
	q.push(s);
	while (!q.empty())
	{
		int u = q.front();
		q.pop();
		cout << u << " ";
		for (auto x : adj[u])
			if (!visited[x])
			{
				visited[x] = true;
				q.push(x);
			}
	}
}


int BFS(std::vector<int> adj[], int V)
{
	bool visited[V] = {false};
	int ans = 0;
	for (int i = 0; i < V; ++i)
	{
		if (!visited[i]) {
			BFSalgo(adj, i, visited);
			ans++;
		}
	}
	return ans;
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
	int u, v;
	std::vector<int> adj[V];
	while (E)
	{
		cin >> u >> v;
		addEdge(adj, u, v);
		E--;
	}

	int ans = BFS(adj, V);
	cout << endl;
	cout << "Connected compo:" << ans << endl;

	return 0;
}