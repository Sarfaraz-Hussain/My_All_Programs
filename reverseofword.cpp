#include <iostream>
#include <algorithm>
using namespace std;
void Find(string &str, int n)
{
	int start = 0;
	for (int end = 0; end < n; end++)
	{
		if (str[end] == ' ')
		{
			reverse(str.begin() + start, str.begin() + end);
			start = ++end;
		}
	}
	reverse(str.begin() + start, str.end());
	reverse(str.begin(), str.end());
	cout << str << endl;

}

int main()
{
	string str = "i love coding";
	int n = str.length();
	Find(str, n);
	return 0;
}