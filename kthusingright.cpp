#include <iostream>
using namespace std;

void kthset(int n, int k)
{
	int mask = n >> (k - 1);
	int ans = mask & 1;
	if (ans == 1)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
}

int main()
{
	int n, k;
	cin >> n >> k;
	kthset(n, k);
	return 0;
}