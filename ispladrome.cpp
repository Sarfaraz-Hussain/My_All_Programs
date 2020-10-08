#include <iostream>
#include<string>
using namespace std;

bool isPalinrome(string str, int start, int end)
{
	if (start >= end)
		return true;

	return str[start] == str[end] && isPalinrome(str, start + 1, end - 1);
}

int main()
{
	string str;
	cin >> str;
	int start = 0, end;
	end = str.length() - 1;
	int ans = isPalinrome(str, start, end);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}