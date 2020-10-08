#include <iostream>
using namespace std;

class mystack
{
public:
	int n;
	int arr[100];
	mystack(int t)
	{
		n = t;
		arr[n];
	}
	// int arr[n];
	int top = 0;
	bool isEmpty()
	{
		if (top == 0)
			return true;
		else
			return false;
	}

	void push(int key)
	{
		if (top == n - 1) {
			cout << "overflow" << endl;
			return;
		}
		arr[top] = key;
		top++;
	}
	int pop()
	{
		if (top == 0)
		{
			cout << "Underflow" << endl;
			return 0;
		}
		// int t = arr[top];

		top--;
		return arr[top];
	}

	int peek()
	{
		if (top == 0) {
			cout << "Underflow" << endl;
			return -1;
		}
		return arr[top - 1];
	}

	int size()
	{
		if (isEmpty())
			return 0;
		return top;
	}
	void print()
	{
		for (int i = top - 1; i >= 0; --i)
		{
			cout << arr[i] << endl;
		}
	}

};


int main()
{
	mystack stk(5);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.print();
	cout << stk.size() << endl;
	cout << stk.isEmpty() << endl;
	// cout << stk.peek() << endl;
	cout << stk.peek() << endl;
	cout << stk.pop() << endl;
	cout << stk.size() << endl;

	return 0;

}