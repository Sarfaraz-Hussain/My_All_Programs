#include <iostream>
using namespace std;

bool findTriplet(int a[], int n, int sum)
{
	int left;
	int right;
	for (int i = 0; i < n; i++)
	{
		left = i + 1;
		right = n - 1;
		while (left < right)
		{
			if (a[i] + a[left] + a[right] == sum)
				return true;
			else if (a[i] + a[left] + a[right] > sum)
				right--;
			else
				left++;
		}

	}
	return false;
}

int main()
{
	int a[] = {2, 3, 4, 8, 9, 20, 40};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 14;
	int ans = findTriplet(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}