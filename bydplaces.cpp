#include <iostream>
using namespace std;

void leftRoatebyD(int a[], int n, int d)
{
	int temp;
	int j;
	for (int i = 0; i < d; i++)
	{
		temp = a[0];
		for (j = 1; j < n; j++)
		{
			a[j - 1] = a[j];
		}
		a[j - 1] = temp;
	}

}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(a) / sizeof(a[0]);
	leftRoatebyD(a, size, 3);
	for (const auto e : a)
		cout << e << " ";
	cout << endl;
	return 0;
}