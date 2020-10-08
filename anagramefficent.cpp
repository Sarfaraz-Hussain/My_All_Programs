#include <iostream>
using namespace std;

const int CHAR = 256;

bool isAnagram(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	int count[CHAR] = {0};
	for (int i = 0; i < s1.length(); ++i)
	{
		count[s1[i]]++;
		count[s2[i]]--;
	}
	for (int i = 0; i < CHAR; ++i)
	{
		if (count[i] != 0)
			return false;
	}
	return true;
}

int main()
{
	string s1 = "listen";
	string s2 = "silent";
	int ans = isAnagram(s1, s2);
	if (ans)
		cout << "yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}