#include <iostream>
#include<vector>
using namespace std;

int main()
{

	vector<vector<int>> v = {{1, 2}, {3, 4}};
	for (unsigned i = 0; i < v.size(); i++) {
		for (unsigned j = 0; j < v[0].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}