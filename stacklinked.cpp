#include <iostream>
#include <climits>
using namespace std;

struct node
{
	int data;
	node * next;
	node(int d)
	{
		data = d;
		next = NULL;
	}

};

class mystack
{
public:
	int size;
	node* head;
	mystack()
	{
		size = 0;
		head = NULL;
	}

	void push(int key)
	{
		node* temp = new node(key);
		temp->next = head;
		head = temp;
		size++;
	}

	int pop()
	{
		if (head == NULL)
			return INT_MAX;
		int res = head->data;
		node* temp = head;
		head = head->next;
		delete(temp);
		size--;
		return res;

	}
	int peek()
	{
		if (head == NULL)
			return INT_MAX;
		return head->data;
	}
	int sizestack()
	{
		return size;
	}
	bool isEmpty()
	{
		return head == NULL;
	}
	void print()
	{
		for (node* curr = head; curr != NULL; curr = curr->next)
			cout << curr->data << endl;
	}

};

int main()
{
	mystack stk;
	int n;
	cin >> n;
	while (n)
	{
		int val;
		cin >> val;
		stk.push(val);
		n--;
	}
	cout << endl;
	stk.print();
	stk.pop();
	cout << "After poped" << endl;
	stk.print();
	return 0;
}