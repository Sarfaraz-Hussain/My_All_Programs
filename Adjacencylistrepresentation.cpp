//The second method to represent the graph in memory is the in the form adjacency list
#include <iostream>
#include<set>
#include<vector>
using namespace std;

struct vertex
{

	vertex(int v, set<int> &a): vertex_number(v), adjacents(a) {}
	int vertex_number;
	set<int> adjacents;

};

class Graph
{
public:
	Graph(vector<vertex> &v): v_(v) {}
	vector<vertex> v_;
	bool isEularwalkable();
};

bool Graph:: isEularwalkable()
{
	std::vector<int> degrees(v_.size());
	for (auto v : v_)
	{
		degrees[v.vertex_number] = v.adjacents.size();
	}
	int oddcount = 0;
	for (auto d : degrees)
	{
		if (d % 2 == 1)
			oddcount++;
	}
	return oddcount == 0 || oddcount == 2;
}


//How to initilaize
int main()
{
	Graph g({vertex(0, {1, 2}), vertex(1, {0, 2, 3, 4}), vertex(2, {0, 1, 3}), vertex(3, {1, 2, 4})});

	if (g.isEularwalkable())
		cout << "Graph is Eular Walkable" << endl;
	else
		cout << "Graph is not Eular Walkable" << endl;
	return 0;
}