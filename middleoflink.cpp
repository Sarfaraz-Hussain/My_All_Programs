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

void middle(node *head, int n)
{
	if (head == NULL)
		return;
	// node*temp = head;
	if (n % 2 == 1)
	{
		int i = 0;
		while (i < n / 2)
		{
			head = head -> next;
			i++;
		}
		cout << "middle is " << head->data << endl;
	}
	else
	{
		int i = 0;
		while (i < n / 2 - 1)
		{
			head = head -> next;
			i++;
		}
		cout << "middle is " << head->data << endl;
	}
}

node* createlist(node*head, int data)
{
	node*temp = new node(data);
	temp->next = head;
	return temp;
}

int main()
{
	node* head = NULL;
	int n, val;
	cin >> n;
	int i = n;
	while (n)
	{
		cin >> val;
		head = createlist(head, val);
		n--;
	}
	middle(head, i);
	return 0;

}