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

// bool Search(node* root, int key)
// {
// 	if (root == NULL)
// 		return false;
// 	else if (root->data == key)
// 		return true;
// 	else if (key > root->data)
// 		return Search(root->right, key);
// 	else
// 		return Search(root->left, key);
// }

//iterative solution

bool Search(node* root, int key)
{
	while (root != NULL)
	{
		if (root->data == key)
			return true;
		else if (key > root->data)
			root = root->right;
		else
			root = root->left;
	}
	return false;
}

int main()
{
	node *root = NULL;
	root = new node(15);
	root->left = new node(5);
	root->right = new node(20);
	root->left->left = new node(3);
	root->right->left = new node(18);
	root->right->right = new node(80);
	root->right->left->left = new node(16);
	int ans = Search(root, 16);
	if (ans)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}