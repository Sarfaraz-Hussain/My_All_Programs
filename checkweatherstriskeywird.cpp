#include <iostream>
using namespace std;

bool Checking(string keyword[], int n, string str)
{
	for (int i = 0; i < n; ++i)
	{
		if (str == keyword[i])
			return true;
	}
	return false;
}

int main()
{
	string keyword[] = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
	int n = sizeof(keyword) / sizeof(keyword[0]);
	string str;
	cin >> str;
	int ans = Checking(keyword, n, str);
	if (ans)
		cout << str << " is a keyword" << endl;
	else
		cout << str << " is not a keyword" << endl;
	return 0;
}