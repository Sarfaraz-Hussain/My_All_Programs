#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string str)
{
	string str1;
	str1 = str;
	// str.strrev();
	reverse(str.begin(), str.end());
	if (str == str1)
		return true;
	else
		return false;
}

int main()
{
	string str;
	cin >> str;
	int ans = isPalindrome(str);
	if (ans)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}