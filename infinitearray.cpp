#include <iostream>
using namespace std;

int getPos(int a[], int n, int x)
{
	int i = 0;
	while (true)
	{
		if (a[i] == x)
			return i;
		if (a[i] > x)
			return -1;
		i++;
	}
}

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = sizeof(a) / sizeof(a[0]);
	int ans = getPos(a, n, 10);
	cout << "Ans:" << ans << endl;
	return 0;
}