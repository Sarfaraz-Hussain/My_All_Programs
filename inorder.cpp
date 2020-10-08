#include <iostream>
using namespace std;

struct node
{
	int key;
	node *left, *right;
	node(int d)
	{
		key = d;
		left = right = NULL;
	}
};

void inorder(node * root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}

int main()
{
	node* root = NULL;
	root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	inorder(root);
	return 0;
}