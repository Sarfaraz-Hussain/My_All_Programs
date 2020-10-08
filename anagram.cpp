#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string str1, string str2)
{
	if (str1.length() != str2.length())
		return false;
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	return (str1 == str2);
}

int main()
{
	string str1 = "listen";
	string str2 = "silent";
	// cout << isAnagram(str2, str1) << endl;
	int ans = isAnagram(str1, str2);
	if (ans)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}