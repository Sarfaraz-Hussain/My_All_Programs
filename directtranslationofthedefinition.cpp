//The first method to represent graph into memory is direct trasnalationof the definition
//Here to represent the set of vertice we are using vector
//and to represent the set of edges we are using vector of pair

#include <iostream>
#include<vector>
// #include<pair>
using namespace std;

class Graph
{
public:
	Graph(std::vector<int> &v, std::vector<pair<int, int>> &e): v_(v), e_(e) {}
	std::vector<int> v_;
	std::vector<pair<int, int>> e_;
	bool isEularWalkable();
};

bool Graph:: isEularWalkable()
{
	//first we create a vector to store the degree of each vertex
	std::vector<int> degrees(v_.size());
	for (auto e : e_)
	{
		degrees[e.first]++;
		degrees[e.second]++;
	}
	int nooddver = 0;
	for (auto d : degrees)
	{
		if (d % 2 == 1)
			nooddver++;

	}
	return nooddver == 0 || nooddver == 2;
}

int main()
{
	std::vector<int> v = {0, 1, 2, 3};
	std::vector<pair<int, int>> e = {{0, 1}, {1, 2}, {2, 3}, {3, 0}, {0, 2}, {1, 3}};
	Graph g(v, e);    //graph is ready to use
	if (g.isEularWalkable())
		cout << "Graph is Eular graph" << endl;
	else
		cout << "Graph is not Eular" << endl;
	return 0;
}