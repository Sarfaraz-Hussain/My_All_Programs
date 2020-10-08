#include <iostream>
using namespace std;

const int n = 3;

void rotatematrix(int mat[n][n])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			swap(mat[i][j], mat[j][i]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		int l = 0, h = n - 1;
		while (l < h)
		{
			swap(mat[l][i], mat[h][i]);
			l++;
			h--;
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
	rotatematrix(mat);
	return 0;
}