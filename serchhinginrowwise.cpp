#include <iostream>
using namespace std;

const int n = 4;

void searchinrow(int mat[n][n], int x)
{
	int i = 0;
	int j = n - 1;
	while (i < n && j >= 0)
	{
		if (mat[i][j] == x)
		{
			cout << i << " " << j << endl;
			return;
		}
		else if (mat[i][j] > x)
			j--;
		else
			i++;
	}
	cout << "Not found" << endl;

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
	int x;
	cin >> x;
	searchinrow(mat, x);
	return 0;
}