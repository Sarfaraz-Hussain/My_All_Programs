#include <iostream>
using namespace std;

class Mystack
{
public:
	int cap;
	int *arr;
	int top;
	Mystack(int c)
	{
		cap = c;
		arr = new int[cap];
		top = -1;
	}
	bool isEmpty()
	{
		return top == -1;
	}
	bool isFull()
	{
		return (top == cap - 1);
	}
	void push(int k)
	{
		if (isFull())
			return;
		top++;
		arr[top] = k;
	}
	int pop()
	{
		if (isEmpty())
			return -1;
		int k = arr[top];
		top--;
		return k;
	}
	int peek()
	{
		if (isEmpty())
			return -1;
		return arr[top];
	}

	int size()
	{
		return top;
	}
	void print()
	{
		for (int i = top; i >= 0; i--)
			cout << arr[i] << endl;
	}

};

int main()
{
	Mystack stk(5);
	stk.push(45);
	stk.push(30);
	stk.push(50);
	stk.print();
	cout << "poped element " << stk.pop() << endl;
	stk.push(60);
	stk.print();
	return 0;
}