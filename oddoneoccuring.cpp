#include <iostream>
using namespace std;

void oddOneout(int a[], int n)
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
	int a[] = {4, 3, 4, 4, 4, 5, 5};
	int size = sizeof(a) / sizeof(a[0]);
	oddOneout(a, size);
	return 0;
}