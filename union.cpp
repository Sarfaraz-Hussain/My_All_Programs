#include <iostream>
using namespace std;

void Union(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (i > 0 && a[i] == a[i - 1])
		{
			i++;
			continue;
		}
		if (a[i] > b[j])
		{
			cout << b[j] << " ";
			j++;
		}
		else if (a[i] < b[j])
		{
			cout << a[i] << " ";
			i++;
		}
		else
		{
			cout << a[i] << " ";
			i++; j++;
		}
	}
	while (i < m)
	{
		if (a[i] != a[i - 1])
			cout << a[i] << " ";
		i++;
	}
	while (j < n)
	{
		if (b[j] != b[j + 1])
			cout << b[j] << " ";
		j++;
	}
}

int main()
{
	int a[] = {3, 8, 10};
	int b[] = {2, 8, 9, 10, 15};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	Union(a, b, m, n);
	cout << "\n";
	return 0;
}