#include <iostream>
using namespace std;
void oddAppear(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i] == a[j])
				count++;
		}
		if (count % 2 != 0)
			cout << a[i] << endl;
	}
}

int main()
{
	int a[] = {3, 4, 3, 4, 8, 4, 4, 32, 7, 7};
	int size = sizeof(a) / sizeof(a[0]);
	oddAppear(a, size);
	return 0;
}