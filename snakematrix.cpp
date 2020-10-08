#include <iostream>
#include <vector>
using namespace std;


void SnakePattern(std::vector<std::vector<int>> &arr)
{

	for (int i = 0; i < arr.size(); ++i)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < arr[i].size(); ++j)
				cout << arr[i][j] << " ";
			cout << endl;
		}
		else
		{
			for (int j = arr[i].size() - 1; j >= 0; --j)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	std::vector<std::vector<int>> arr;
	for (int i = 0; i < m; ++i)
	{
		std::vector<int> v;
		for (int j = 0; j < n; ++j)
		{
			v.push_back(j + i);
		}
		arr.push_back(v);
	}

	SnakePattern(arr);
}