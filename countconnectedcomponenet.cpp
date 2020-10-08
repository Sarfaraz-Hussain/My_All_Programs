#include <iostream>
#include <vector>
using namespace std;

void DFSrec(std::vector<int> adj[], int s, bool visited[])
{
	visited[s] = true;
	for (const auto x : adj[s])
		if (!visited[x])
			DFSrec(adj, x, visited);
}


int DFS(std::vector<int> adj[], int V)
{
	bool visited[V];
	for (int i = 0; i < V; ++i)
	{
		visited[i] = false;
	}
	int ans = 0;
	for (int i = 0; i < V; ++i)
	{
		if (!visited[i]) {
			DFSrec(adj, i, visited);
			ans++;
		}
	}
	return ans;
}

void addedge(std::vector<int> adj[], int u, int v)
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
	int t;
	cin >> t;
	while (t)
	{
		cin >> u >> v;
		addedge(adj, u, v);
		t--;
	}

	int ans = DFS(adj, V);
	cout << "Number of connected components:" << ans << endl;
	return 0;
}