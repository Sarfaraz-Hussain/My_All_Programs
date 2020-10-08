#include <iostream>
using namespace std;
int lcm(int a, int b)
{
	int ans = max(a, b);
	while (true)
	{
		if (ans % a == 0 && ans % b == 0)
			return ans;
		ans++;
	}
	return ans;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << "LCM:" << lcm(a, b) << "\n";
	return 0;
}