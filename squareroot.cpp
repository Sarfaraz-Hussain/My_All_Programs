#include <iostream>
using namespace std;

int FindSquare(int low, int high)
{
	int ans = -1;
	int n = high;
	while (low <= high)
	{
		int mid = (low + high) / 2;
		int ms = mid * mid;
		if (ms == n)
			return mid;
		else if (ms < n) {
			low = mid + 1;
			ans = mid;
		}
		else
			high = mid - 1;
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	int ans = FindSquare(1, n);
	cout << "Square root is:" << ans << endl;
	return 0;
}