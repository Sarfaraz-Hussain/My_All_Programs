#include <iostream>
using namespace std;

struct node
{
	int data;
	node* next = NULL;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void Findele(node *head, int n)
{

	int count = 0;
	for (node*curr = head; curr != NULL; curr = curr->next)
	{
		count++;
	}
	if (count < n)
		return;
	node *curr = head;
	for (int i = 1; i < count - n + 1; i++)
	{
		curr = curr->next;
	}

	cout << curr->data << endl;
}

node* createList(node*head, int key)
{
	node *temp = new node(key);
	temp->next = head;
	return temp;
}
void printlist(node *head)
{
	if (head == NULL)
		return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
}

int main()
{
	node* head = NULL;
	int n, val;
	cin >> n;
	while (n)
	{
		cin >> val;
		head = createList(head, val);
		n--;
	}

	printlist(head);
	int k;
	cin >> k;
	Findele(head, k);
	return 0;
}