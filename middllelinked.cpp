#include <iostream>
using namespace std;

struct node
{
	int data;
	node*next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void middle(node*head)
{
	if (head == NULL)
		return;
	node *slow, *fast;
	slow = fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << "Middle is " << slow->data << endl;
}

node* addatbegin(node*head, int key)
{
	node*temp = new node(key);
	temp->next = head;
	return temp;
}

int main()
{
	node*head = NULL;
	int n, val;
	cin >> n;
	while (n)
	{
		cin >> val;
		head = addatbegin(head, val);
		n--;
	}
	middle(head);
	return 0;
}