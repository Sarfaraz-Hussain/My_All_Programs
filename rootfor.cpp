#include <iostream>
using namespace std;

int SquareFind(int n)
{
	int i = 1;
	while (i * i <= n)
		i++;
	return (i - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << "Ans:" << SquareFind(n) << endl;
	return 0;
}