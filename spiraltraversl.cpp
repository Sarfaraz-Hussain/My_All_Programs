#include <iostream>
using namespace std;

const int n = 4;
void SpiralTraversal(int mat[n][n])
{
	int left = 0, right = n - 1, top = 0, bottom = n - 1;
	while (left <= right && top <= bottom)
	{
		for (int i = left; i <= right; ++i)
		{
			cout << mat[top][i] << " ";
		}
		top++;
		for (int i = top; i <= bottom; ++i)
		{
			cout << mat[i][right] << " ";
		}
		right--;
		if (top <= bottom)
		{
			for (int i = right; i >= left; --i)
			{
				cout << mat[bottom][i] << " ";
			}
			bottom--;

		}
		if (left <= right)
		{
			for (int i = bottom; i >= top; --i)
			{
				cout << mat[i][left] << " ";
			}
			left++;
		}
	}
}
int main()
{
	int val;
	int mat[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> val;
			mat[i][j] = val;
		}
	}
	SpiralTraversal(mat);
	return 0;
}

