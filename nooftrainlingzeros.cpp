#include <iostream>
using namespace std;

int CounttrailingZeros(int n)
{
	int ans = 0;
	for (int i = 5; i <= n; i = i * 5)
		ans = ans + n / i;
	return ans;

}

int main()
{
	int n;
	cin >> n;
	cout << "No of trailing zeros are " << CounttrailingZeros(n) << endl;
	return 0;
}


//The time complexity is o(logn)