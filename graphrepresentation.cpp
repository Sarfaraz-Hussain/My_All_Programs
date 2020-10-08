#include <iostream>
#include<vector>
using namespace std;

class Graph
{
public:
	Graph(std::vector<int> &v, std::vector<pair<int, int>> e)
		: v_(v), e_(e) {}

	bool isEularWalkable();
	std::vector<int> v_;
	std::vector<pair<int, int>> e_;
};

bool Graph:: isEularWalkable()
{
	std::vector<int> degrees(v_.size());
	for (const auto e : e_)
	{
		degrees[e.first]++;
		degrees[e.second]++;
	}
	int counodds = 0;
	for (const auto d : degrees)
	{
		if (d % 2 == 1)
			counodds++;
	}
	return (counodds == 0 || counodds == 2);
}

int main()
{
	std::vector<int> v = {0, 1, 2, 3};
	std::vector<pair<int, int>> e = {{0, 1}, {1, 2}, {2, 3}, {3, 0}};

	Graph g(v, e);
	cout << g.isEularWalkable() << endl;
	return 0;
}
