#include <iostream>
using namespace std;
const int r = 3;
const int c = 2;
void Transpose(int a[][c], int r)
{
	int temp[c][r];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			temp[j][i] = a[i][j];
		}
	}

	for (int i = 0; i < c; ++i)
	{
		for (int j = 0; j < r; ++j)
		{
			cout << temp[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int val;
	int a[r][c];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> val;
			a[i][j] = val;
		}
	}
	Transpose(a, r);

	return 0;
}
