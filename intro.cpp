#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str = "geeksforgeeks";
	for (int i = 0; i < str.length(); ++i)
	{
		cout << str[i];
	}
	cout << endl;
	for (auto x : str)
		cout << x;
	cout << endl;
	return 0;
}