#include <iostream>
using namespace std;
// const int CHAR=26;
int isRepeat(string &str)
{
	// int count[CHAR]={0};
	for (int i = 0; i < str.length(); ++i)
	{
		for (int j = i + 1; j < str.length(); ++j)
		{
			if (str[i] == str[j])
				return i;
		}
	}
	return -1;
}

int main()
{
	string str = "forgeeks";
	int ans = isRepeat(str);
	cout << ans << endl;
	return 0;
}