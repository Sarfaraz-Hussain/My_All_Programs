#include <iostream>
using namespace std;

void count(int a[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res = res ^ a[i];
	}
	if (res != 0)
		cout << res << endl;
}

int main()
{
	int a[] = {4, 3, 2, 2, 4, 4, 4, 5, 5};
	int size = sizeof(a) / sizeof(a[0]);
	count(a, size);
	return 0;
}