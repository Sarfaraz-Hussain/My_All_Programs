#include <iostream>
using namespace std;

const int r = 3;
const int c = 2;
void print(int mat[][c])
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int mat[r][c] = {
		{4, 3},
		{6, 9},
		{2, 8}
	};
	print(mat);
	return 0;
}