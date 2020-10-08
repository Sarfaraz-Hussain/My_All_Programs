#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void Reverse(queue<int>  q)
{
	stack<int> s;
	while (!q.empty())
	{
		s.push(q.front());
		q.pop();
	}

	while (!s.empty())
	{
		// int t = s.pop();
		q.push(s.top());
		s.pop();
	}
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
}

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	Reverse(q);
	return 0;

}