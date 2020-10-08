#include <iostream>
using namespace std;

string Xrev(string str, int n)
{
	int i = 0, j = n - 1;
	while (i < j)
	{
		swap(str[i], str[j]);
		i++;
		j--;
	}
	return str;
}

int main()
{
	string str;
	getline(cin, str);
	int n = str.length();
	cout << Xrev(str, n) << endl;
	return 0;

}