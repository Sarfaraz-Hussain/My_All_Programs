#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	std::vector<int> arr[3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			arr[i].push_back(10);
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			cout << arr[i][j] << " ";
	cout << endl;
	return 0;
}