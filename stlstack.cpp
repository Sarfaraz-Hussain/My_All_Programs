#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	s.push(30);
	s.push(40);
	s.push(60);
	cout << s.top() << endl;
	s.pop();
	cout << s.size() << endl;
	return 0;
}