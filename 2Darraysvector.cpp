#include <iostream>
#include <vector>
using namespace std;

void print(std::vector<int> arr[], int m)
{
	for (int i = 0; i < m; ++i)
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
	int m = 3;
	int n = 2;
	std::vector<int> arr[m];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i].push_back(10);
		}
	}
	print(arr, m);
	return 0;
}