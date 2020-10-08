#include <iostream>
using namespace std;

long long int SubarrayProduct(long long int a[], int n)
{
	//total product
	long long int res = 1;
	//loops
	for (int i = 0; i < n; i++)
	{
		long long int pro = 1;

		for (int j = i; j < n; j++)
		{
			pro = pro * a[j];
			res *= pro;
		}
	}
	return res;
}

int main()
{
	long long int a[] = {10, 3, 7};
	int n = sizeof(a) / sizeof(a[0]);
	long long int pro = SubarrayProduct(a, n);
	cout << "the product of Subarrays:" << pro << endl;
	return 0;
}