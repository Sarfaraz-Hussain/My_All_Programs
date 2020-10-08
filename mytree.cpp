//Here we make the tree

#include <iostream>
#include<algorithm>
using namespace std;

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int d): data(d), left(nullptr), right(nullptr) {}
};


class Solution
{
public:
	Node* insert(Node* root, int data)
	{
		if (root == nullptr)
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


	// inorder
	void inorder(Node *root)
	{
		if (!root)
			return ;
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
	// int height(Node*root)
	// {
	// 	if (!root)
	// 		return -1;
	// 	int lh = height(root->left);
	// 	int rh = height(root->right);
	// 	return lh > rh ? lh + 1 : rh + 1;
	// }

	int Hight(Node*root)
	{
		if (!root)
			return -1;
		return 1 + max(Hight(root->left), Hight(root->right));
	}

};



int main()
{
	Solution myTree;
	Node* root = nullptr;
	int data;
	int nodes;
	cin >> nodes;
	while (nodes-- > 0)
	{
		cin >> data;
		root = myTree.insert(root, data);
	}
	myTree.inorder(root);
	cout << "the height of tree is:";
	cout << myTree.Hight(root) << endl;;
}