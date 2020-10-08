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


int main()
{
	node *root = NULL;
	root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(50);
	return 0;
}