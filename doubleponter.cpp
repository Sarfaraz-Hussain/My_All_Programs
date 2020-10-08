#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int **arr;
	arr = new int*[3];
	for (int i = 0; i < 3; i++)
		arr[i] = new int[2];
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			arr[i][j] = 10;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}