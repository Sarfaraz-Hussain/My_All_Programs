#include <iostream>
using namespace std;
const int r = 4;
const int c = 3;

void Btraversal(int mat[r][c])
{
	if (r == 1)
		for (int i = 0; i < c; ++i)
		{
			cout << mat[0][i] << " ";
		}
	else if (c == 1)
		for (int i = 0; i < r; ++i)
		{
			cout << mat[i][0] << " ";
		}
	else
	{
		for (int i = 0; i < c; ++i)
		{
			cout << mat[0][i] << " ";
		}
		for (int i = 1; i < r ; ++i)
		{
			cout << mat[i][c - 1] << " ";
		}
		for (int i = c - 2; i >= 0 ; --i)
		{
			cout << mat[r - 1][i] << " ";
		}
		for (int i = r - 2; i > 0; --i)
		{
			cout << mat[i][0] << " ";
		}
	}

}

int main()
{


	int val;
	int mat[r][c];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> val;
			mat[i][j] = val;
		}
	}
	Btraversal(mat);
	return 0;
}