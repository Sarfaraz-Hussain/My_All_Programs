#include <iostream>
using namespace std;
const int CHAR = 26;  //we can read it but we can not write it again.
int isFind(string &str)
{
	int count[CHAR] = {0};
	for (int i = 0; i < str.length(); ++i)
	{
		count[str[i] - 'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if (count[i] == 1)
			return i;
	}
	return -1;
}

int main()
{
	string str = "geeksforgeeks";
	int ans = isFind(str);
	cout << ans << endl;
	return 0;
}