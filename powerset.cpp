#include <iostream>
#include<string>
using namespace std;

void findPowerset(string str)
{
	int n = str.length();
	int counter = (1 << n);
	for (int i = 0; i < counter; ++i)
	{
		for (int k = 0; k < n; ++k)
		{
			if ((i & (1 << k)) != 0)
				cout << str[k];
		}
		cout << endl;
	}

}

int main()
{
	string str;
	cin >> str;
	findPowerset(str);
	return 0;

}