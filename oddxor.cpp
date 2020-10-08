#include <iostream>
using namespace std;

int findOdd(int a[], int n)
{
	int res = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		res = (i + 1)^a[i];
	}
	res = res ^ (i + 1);
	return res;
}

int main()
{
	int a[] = {1, 2, 3, 4};
	int size = sizeof(a) / sizeof(a[0]);
	cout << "The missing number is:" << findOdd(a, size) << endl;
	return 0;
}