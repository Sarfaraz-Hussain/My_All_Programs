#include <iostream>
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

node* reverselist(node* head)
{
	node* prev = NULL;
	node* curr = head;

	while (curr != NULL)
	{
		node *temp = curr->next;
		curr->next = prev;
		prev = curr; curr = temp;
	}
	return prev;
}

node* createList(node* head, int key)
{
	node * temp = new node(key);
	temp->next = head;
	return temp;
}

void printlist(node* head)
{
	for (node* curr = head; curr != NULL; curr = curr->next)
		cout << curr->data << " ";
	cout << endl;
}

int main()
{
	node *head = NULL;
	int n, val;
	cin >> n;
	while (n)
	{
		cin >> val;
		head = createList(head, val);
		n--;
	}
	printlist(head);
	head = reverselist(head);
	printlist(head);

	return 0;
}