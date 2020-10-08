#include <iostream>
using namespace std;

void lefRotate(int a[], int n)
{
	int temp;
	temp = a[0];
	int i;
	for (i = 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	a[i - 1] = temp;
}

int main()
{
	int a[] = {1, 2, 3, 4, 5};
	int size = sizeof(a) / sizeof(a[0]);
	lefRotate(a, size);
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}