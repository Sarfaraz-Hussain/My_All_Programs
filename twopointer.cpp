#include <iostream>
using namespace std;

bool findPair(int a[], int n, int sum)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		if (a[left] + a[right] == sum)
			return true;
		else if (a[left] + a[right] > sum)
			right--;
		else
			left++;
	}
	return false;
}

int main()
{
	int a[] = {2, 3, 4, 8, 9n, 20, 40};
	int n = sizeof(a) / sizeof(a[0]);
	int sum = 17;
	int ans = findPair(a, n, sum);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}