//here we will use map to Represent adjacency list in memory

#include <iostream>
#include<map>
#include<set>
using namespace std;
class Graph
{

public:
	Graph(map<int, set<int>> &vertices): v_(vertices) {}
	std::map<int, set<int>> v_;
};

int main()
{
	std::map<int, set<int>> vertices = {

		{0, {1, 2}},
		{1, {0, 2, 3, 4}},
		{2, {0, 1, 3}},
		{3, {1, 2, 4}}
	};
	Graph g(vertices);
	return 0;
}