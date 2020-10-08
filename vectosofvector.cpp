#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<std::vector<int>> arr;
	for (int i = 0; i < 3; i++)
	{
		std::vector<int> v;
		for (int j = 0; j < 2; j++)
			v.push_back(10);
		arr.push_back(v);
	}

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr[i].size(); j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}