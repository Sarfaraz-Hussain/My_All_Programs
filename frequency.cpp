#include <iostream>
using namespace std;

void frequencyCount(int a[], int n)
{
	int freq = 1;
	int i = 1;
	while (i < n)
	{
		while (i < n && a[i] == a[i - 1])
		{
			freq++;
			i++;
		}
		cout << a[i - 1] << " " << freq << endl;
		i++;
		freq = 1;
	}
}

int main()
{
	int a[] = {10, 10, 10, 7, 6, 2, 2};
	int n = sizeof(a) / sizeof(a[0]);
	frequencyCount(a, n);
	return 0;
}