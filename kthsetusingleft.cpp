#include <iostream>
using namespace std;

void isset(int n, int k)
{
	int mask = 1 << (k - 1);
	int ans = n & mask;
	if (ans)
		cout << "Yes" << "\n";
	else
		cout << "No" << endl;
}

int main()
{
	int n, k;
	cin >> n >> k;
	isset(n, k);
	return 0;
}