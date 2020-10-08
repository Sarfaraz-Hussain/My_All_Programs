#include <iostream>
using namespace std;

int Intersaction(int a[], int b[], int m, int n)
{
	int res = 0;
	for (int i = 0; i < m; ++i)
	{
		bool flag = false;
		for (int j = 0; j < i; j++)
		{
			if (a[j] == a[i])
			{
				flag = true;
				break;
			}
		}
		if (flag == true)
			continue;
		for (int k = 0; k < n; ++k)
		{
			if (b[k] == a[i])
			{
				res++;
				break;
			}
		}
	}
	return res;
}


int main()
{
	int a[] = {2, 2, 34, 5, 6, 7};
	int b[] = {2, 5};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	cout << Intersaction(a, b, m, n) << endl;
	return 0;
}