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

node * createlist(node* head, int key)
{
	node* temp = new node(key);
	temp->next = head;
	return temp;
}

void printlist(node* head)
{
	for (node* curr = head; curr != NULL; curr = curr->next)
	{
		cout << curr->data << " ";
	}
}

void printright(node* head, int n)
{
	node *slow = head;
	node *fast = head;
	while (n)                       //set  fast at n position ahead
	{
		fast = fast->next;
		n--;
	}
	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	cout << slow->data << endl;


}

int main()
{
	node* head = NULL;
	int n, val;
	cin >> n;
	while (n)
	{
		cin >> val;
		head = createlist(head, val);
		n--;
	}
	printlist(head);
	cout << endl;
	int k;
	cin >> k;
	printright(head, k);
	return 0;
}