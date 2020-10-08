#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	unordered_set<int> s;
	s.insert(12);
	s.insert(23);
	s.insert(45);
	s.insert(90);
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";

	cout << endl;
	if (s.find(47) == s.end())
		cout << "Not found";
	else
		cout << "Found";
	return 0;
}