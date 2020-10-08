#include <iostream>
#include<cstdlib>
using namespace std;

void findpair(int a[], int n, int sum)
{
	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j)
			{
				ans = a[i] + a[j];
				if (ans == sum) {
					printf("Yes\nThe pair with sum:(%d,%d)\n", a[i], a[j]);
					break;
				}

			}
		}
	}
}

int main()
{
	int a[] = {11, 15, 6, 8, 9, 10};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 17;
	findpair(a, n, sum);
	return 0;
}