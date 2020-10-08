#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
	int t = n;
	int rev = 0;
	while (n > 0) {
		int r = n % 10;
		rev = rev * 10 + r;
		n = n / 10;
	}
	if (rev == t)
		return true;
	else
		return false;
}

int main()
{
	int n;
	cin >> n;
	int ans = isPalindrome(n);
	if (ans == 1)
		cout << "Number is palidrome" << endl;
	else
		cout << "Number is not palindroem" << endl;
	return 0;
}