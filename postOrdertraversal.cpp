#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *left;
	Node *right;
	Node(int d): data(d), left(NULL), right(NULL) {}
};

class Solution
{
public:
	Node* insert(Node* root, int data)
	{
		if (root == NULL)
			return new Node(data);
		else
		{
			Node* cur;
			if (data <= root->data)
			{
				cur = insert(root->left, data);
				root->left = cur;
			}
			else
			{
				cur = insert(root->right, data);
				root->right = cur;
			}
			return root;
		}
	}

	void postOrder(Node* root)
	{
		if (!root)
			return;
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << " ";
	}
	void preOrder(Node* root)
	{
		if (!root)
			return;
		cout << root->data << " ";
		preOrder(root->left);
		preOrder(root->right);
	}
	void inOrder(Node* root)
	{
		if (!root)
			return;
		inOrder(root->left);
		cout << root->data << " ";
		inOrder(root->right);
	}

};


int main()
{
	Solution mytree;
	Node *root = NULL;
	int t;
	int data;

	cin >> t;
	while (t-- > 0)
	{
		cin >> data;
		root = mytree.insert(root, data);
	}
	cout << "The post order traversal is:";
	mytree.postOrder(root);
	cout << "\nThe inorder traversal is:";
	mytree.inOrder(root);
	cout << "\nThe preOrder traversal is:";
	mytree.preOrder(root);
	return 0;

}