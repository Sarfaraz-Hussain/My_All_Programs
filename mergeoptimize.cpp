#include <iostream>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
	int c[m + n];
	int i = 0, j = 0, k = 0;
	while (i < m && j < n)
	{
		if (a[i] <= b[j])
		{
			c[k] = a[i];
			i++;
		}
		else
		{
			c[k] = b[j];
			j++;
		}
		k++;
	}

	//copy remaining elements in the array
	while (i < m)
	{
		c[k] = a[i];
		i++;
		k++;
	}
	while (j < n)
	{
		c[k] = b[j];
		j++;
		k++;
	}

	for (auto x : c)
		cout << x << " ";
	cout << endl;


}


int main()
{
	int a[] = {10, 20, 25,  50};
	int b[] = {5, 6, 6, 10, 15};
	int m = sizeof(a) / sizeof(a[0]);
	int n = sizeof(b) / sizeof(b[0]);
	merge(a, b, m, n);
	return 0;
}




