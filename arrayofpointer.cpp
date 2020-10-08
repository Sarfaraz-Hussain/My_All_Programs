#include <iostream>
using namespace std;

int main()
{
	int *a[3];
	for (int i = 0; i < 3; ++i)
	{
		a[i] = new int[2];
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			a[i][j] = 10;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			// a[i][j]=10;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}