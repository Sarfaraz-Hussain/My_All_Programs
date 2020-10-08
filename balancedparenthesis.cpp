#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

bool matching(char a, char b)
{
	return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

bool BalamcedParen(string str)
{

	stack<int> s;
	int i = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '{' || str[i] == '[' || str[i] == '(')
			s.push(str[i]);
		else
		{
			if (s.empty() == true)
				return false;
			else if (matching(s.top(), str[i]) == true)
				s.pop();
			else
				return false;
		}
	}
	return (s.empty() == true);
}

int main()
{
	string str = "{{()[]{}}}";
	int ans = BalamcedParen(str);
	// cout << ans << endl;
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}