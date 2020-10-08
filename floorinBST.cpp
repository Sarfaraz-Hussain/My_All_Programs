#include <iostream>
using namespace std;

struct node
{
	int data;
	node *left, *right;
	node(int d)
	{
		data = d;
		left = right = NULL;
	}
};

node* FloorInBst(node *root, int key)
{
	node* ans = NULL;
	while (root != NULL)
	{
		if (root->data == key)
			return root;
		else if (root->data > key)
			root = root->left;
		else
		{
			ans = root;
			root = root->right;
		}
	}
	return ans;
}

node* CeilValue(node* root, int key)
{
	node* ans = NULL;
	while (root != NULL)
	{
		if (root->data == key)
			return root;
		else if (root->data > key)
		{
			ans = root;
			root = root->left;
		}
		else
			root = root->right;
	}
	return ans;
}

int main()
{
	node* root = NULL;
	root = new node(10);
	root->left = new node(5);
	root->right = new node(15);
	root->right->left = new node(12);
	root->right->right = new node(30);
	int key;
	cin >> key;
	node*ans = FloorInBst(root, key);
	if (ans != NULL)
		cout << "floor value is " << ans->data << endl;
	else
		cout << "Not present" << endl;
	ans = CeilValue(root, key);
	if (ans != NULL)
		cout << "ceil value is " << ans->data << endl;
	else
		cout << "Not present" << endl;
	return 0;
}