#include <iostream>
#include <vector>
using namespace std;

void AdjacencyList(std::vector<int> Adj[], int u, int v)
{
	Adj[u].push_back(v);
	Adj[v].push_back(u);
}

void printgraph(std::vector<int> Adj[], int V)
{
	for (int i = 0; i < V; ++i)
	{
		for (auto x : Adj[i])
			cout << x << " ";
		cout << endl;
	}
}

int main()
{
	int V = 4;
	std::vector<int> Adj[V];
	AdjacencyList(Adj, 0, 1);
	AdjacencyList(Adj, 0, 2);
	AdjacencyList(Adj, 1, 2);
	AdjacencyList(Adj, 1, 3);
	printgraph(Adj, V);
	return 0;

}