#include <iostream>
using namespace std;

void leaderfind(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		bool flag = true;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] <= a[j])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << a[i] << " ";
	}
}

int main()
{
	int a[] = {7, 10, 4, 10, 6, 5, 2};
	int n = sizeof(a) / sizeof(a[0]);
	leaderfind(a, n);
	cout << endl;
	return 0;
}