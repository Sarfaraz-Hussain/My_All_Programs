#include <iostream>
using namespace std;

long int ProductArray(long int a[], int n)
{
	long int pro = 1;
	for (int i = 0; i < n; i++)
	{

		for (int j = i; j < n; j++)
			for (int k = i; k <= j; k++)
			{
				pro = pro * a[k];
			}
	}
	return pro;
}
int main()
{
	long int a[] = {2, 4};
	int n = sizeof(a) / sizeof(a[0]);
	long int res = ProductArray(a, n);
	cout << "subarray Product:" << res << endl;
	return 0;
}