#include <iostream>
using namespace std;


int NaiveSol(string s1, string s2)
{
	int count = 0;
	if (s1 == s2)
		return s1.length();
	else
	{
		for (auto x : s1)
			for (auto y : s2)
				if (x == y)
					count++;

	}
	return count;
}

int main()
{
	string s1 = "ABC";
	string s2 = "XY";
	cout << "length of longest common subsequence:" << NaiveSol(s1, s2) << endl;
	return 0;
}