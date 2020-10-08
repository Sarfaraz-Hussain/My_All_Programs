#include <iostream>
using namespace std;

int findMax(int n, int size)
{
	if (n < size)
		return 0;
	else
		return 1 + findMax(n - size, size);
}

int main()
{
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int s1 = findMax(n, a);
	int s2 = findMax(n, b);
	int s3 = findMax(n, c);
	int s4 = max(s1, s2);
	int ans = max(s4, s3);
	cout << "the maximum parts:" << ans << endl;
	return 0;
}