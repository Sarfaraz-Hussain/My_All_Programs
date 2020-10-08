#include <iostream>
using namespace std;

void leaderFind(int a[], int n)
{
	int curr_ldr = a[n - 1];
	cout << curr_ldr << " ";
	for (int i = n - 2; i >= 0; i--)
	{
		if (curr_ldr < a[i])
		{
			curr_ldr = a[i];
			cout << curr_ldr << " ";
		}
	}
}

int main()
{
	int a[] = {7, 10, 4, 10, 6, 5, 2};
	int n = sizeof(a) / sizeof(a[0]);
	leaderFind(a, n);
	cout << endl;
	return 0;
}