#include <iostream>
using namespace std;

struct node
{
	int key;
	node* next;
	node(int k)
	{
		key = k;
		next = NULL;
	}
};

node * insertatbegin(int key, node* head)
{
	node* temp = new node(key);
	temp->next = head;
	return temp;
}

void printarray(node *head)
{
	while (head != NULL)
	{
		cout << head->key << " ";
		head = head->next;
	}
}
void Addatend(node * curr, int key)
{
	// node*temp=curr;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new node(key);


}

void Addatafter(node * curr, int key, int loc)
{
	node *p1, *p2;
	p1 = curr;
	int i = 1;
	while (i < loc)
	{
		p1 = p1->next;
		i++;
	}
	p2 = p1->next;
	curr = new node(key);
	p1->next = curr;
	curr->next = p2;
}

int main()
{
	node*head = NULL;
	head = insertatbegin(20, head);
	head = insertatbegin(30, head);
	head = insertatbegin(70, head);
	Addatafter(head, 90, 2);

	printarray(head);
	return 0;
}