//here the representation of the graph in to the memory in the form of Adjacency matrix
#include<iostream>
#include <vector>
#include<bool>
using namespace std;

class Graph
{
	Graph(std::vector<std::vector<int>> &Adjacency): Adjacency_(Adjacency) {}
	bool isEularwalkable();
	std::vector<std::vector<int>> Adjacency_;

};


bool Graph:: isEularwalkable()
{
	std::vector<int> degrees(Adjacency_.size());
	for (int i = 0; i < Adjacency_.size(); ++i)
	{
		for (int j = 0; j < Adjacency_.size(); ++j)
		{
			if (Adjacency_[i][j] == 1)
				degrees[i]++;
		}
	}
	int oddcount = 0;
	for (auto d : degrees)
	{
		if (d % 2 == 1)
			oddcount++;

	}
	return oddcount == 0 || oddcount == 2;
}

int main()
{
	std::vector<std::vector<int>> Adjacency = {
		{0, 1, 1, 0, 0},
		{1, 0, 1, 1, 1},
		{1, 1, 0, 1, 0},
		{0, 1, 1, 0, 1},
		{0, 1, 0, 1, 0}
	};     											//uniform initialization

	Graph g(Adjacency);

	if (g.isEularwalkable())
		std::cout << "Graph is Eular" << endl;
	else
		std::cout << "Graph is not Eular" << endl;
	return 0;
}