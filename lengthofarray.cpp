#include<iostream>
using namespace std;

int maxarray(int a[], int n)
{
	int res = 1;
	int curr;
	for (int i = 0; i < n; i++)
	{
		curr = 1;
		for (int j = i + 1; j < n; j++)
		{
			if ((a[j] % 2 == 1 && a[j - 1] % 2 == 0) || (a[j] % 2 == 0 && a[j - 1] % 2 == 1))
				curr++;
			else
				break;
		}
		res = max(curr, res);
	}
	// res = max(res, curr);
	return res;
}

int main()
{
	int a[] = {5, 10, 20, 6, 3, 8};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "the max:" << maxarray(a, n) << endl;
	return 0;
}
