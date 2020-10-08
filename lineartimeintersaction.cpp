#include <iostream>
using namespace std;

void intersaction(int a[], int b[], int m, int n)
{
	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (i > 0 && a[i - 1] == a[i])
		{
			i++;
			continue;
		}
		if (a[i] < b[j])
			i++;
		else if (a[i] > b[j])
			j++;
		else
		{
			cout << a[i] << " ";
			i++; j++;
		}
	}
}


int main()
{
	int a[] = {2, 5, 8, 13, 15, 20};
	int b[] = {1, 3, 8, 15, 18, 20, 25};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	intersaction(a, b, m, n);
	return 0;
}