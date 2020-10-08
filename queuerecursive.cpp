#include <iostream>
#include <queue>
using namespace std;

void Reverse(queue<int> &q)
{
	if (q.empty())
		return;
	int x = q.front();
	q.pop();
	Reverse(q);
	q.push(x);
}

int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	Reverse(q);
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;
	return 0;

}