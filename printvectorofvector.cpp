#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<std::vector<int>> &arr)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		for (int j = 0; j < arr[i].size(); ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int m = 3, n = 2;
	std::vector<std::vector<int>> arr;
	for (int i = 0; i < m; ++i)
	{
		std::vector<int> v;
		for (int j = 0; j < n; ++j)
		{
			v.push_back(10);
		}
		arr.push_back(v);
	}
	print(arr);
	return 0;
}