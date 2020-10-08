#include <iostream>
using namespace std;

const int n = 3;

void RotateMatrix(int mat[n][n])
{
	int temp[n][n];
	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = 0; j < n; ++j)
		{
			temp[n - i - 1][j] = mat[j][i];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mat[i][j] = temp[i][j];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
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
	RotateMatrix(mat);

	return 0;
}