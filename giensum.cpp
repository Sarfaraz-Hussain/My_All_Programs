#include <iostream>
using namespace std;

bool findpair(int a[], int n, int sum)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] + a[j] == sum)
				return true;

	return false;
}

int main()
{
	int a[] = {2, 3, 4, 8, 9, 20, 40};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 17;
	int ans = findpair(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}