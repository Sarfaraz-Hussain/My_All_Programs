#include <iostream>
using namespace std;
const int  n = 4;

void transpose(int mat[n][n])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			swap(mat[i][j], mat[j][i]);
		}
	}
}

int main()
{
	int mat[n][n];
	int val;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> val;
			mat[i][j] = val;
		}
	}
	transpose(mat);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}