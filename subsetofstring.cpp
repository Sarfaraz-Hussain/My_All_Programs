#include <iostream>
#include<string>
using namespace std;

void printsub(string str, string curr = "", int index = 0)
{
	if (index == str.length())
	{
		cout << curr << endl;
		return;
	}

	printsub(str, curr, index + 1);
	printsub(str, curr + str[index], index + 1);
}

int main()
{
	string str;
	cin >> str;
	printsub(str);
	return 0;
}