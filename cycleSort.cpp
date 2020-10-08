#include <iostream>
using namespace std;

void CycleSortDistinct(int a[], int n)
{
	for (int cs = 0; cs < n - 1; cs++)
	{
		int pos = cs;
		int item = a[cs];
		for (int j = cs + 1; j < n; j++)
		{
			if (a[j] < item)
				pos++;
		}
		swap(a[pos], item);

		while (pos != cs)
		{
			pos = cs;
			for (int j = cs + 1; j < n; j++)
			{
				if (a[j] < item)
					pos++;
			}
			swap(a[pos], item);
		}
	}
}

int main()
{
	int a[] = {20, 40, 50, 10, 30};
	int n = sizeof(a) / sizeof(a[0]);
	CycleSortDistinct(a, n);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}