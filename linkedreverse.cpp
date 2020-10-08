#include <iostream>
#include <vector>
using namespace std;

struct  node
{
	int data;
	node *next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

node* createList(node* head, int key)
{
	node* temp = new node(key);
	temp->next = head;
	return temp;
}

node* reverselinked(node* head)
{
	std::vector<int> v;
	for (node* curr = head; curr != NULL; curr = curr->next)
	{
		v.push_back(curr->data);
	}
	for (node* curr = head; curr != NULL; curr = curr->next)
	{
		curr->data = v.back();
		v.pop_back();
	}
	return head;
}

void printlist(node* head)
{
	for (node* curr = head; curr != NULL; curr = curr->next)
		cout << curr->data << " ";
}

int main()
{
	node * head = NULL;
	int n, val;
	cin >> n;
	while (n)
	{
		cin >> val;
		head = createList(head, val);
		n--;
	}
	printlist(head);
	cout << endl;
	head = reverselinked(head);
	printlist(head);
	cout << endl;
	return 0;
}


