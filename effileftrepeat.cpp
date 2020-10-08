#include <iostream>
using namespace std;

const int CHAR = 26;
int isFind(string &str)
{
	int count[CHAR] = {0};
	for (int i = 0; i < str.length(); ++i)
	{
		count[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (count[i] > 1)
			return (i);
	}
	return -1;
}

int main()
{
	string str = "abcdcdc";
	int ans = isFind(str);
	cout << ans << endl;
	return 0;
}