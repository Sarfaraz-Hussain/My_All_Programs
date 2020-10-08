#include <iostream>
using namespace std;

struct Binary
{
	int data;
	Binary *left, *right;

	Binary(int data): data(data), left(nullptr), right(nullptr) {}

};

void print(Binary *root)
{
	if (root == nullptr)
		return;
	cout << root->data << " ";
	print(root->left);
	print(root -> right);
}

int main()
{
	Binary *root = new Binary(10);
	Binary *left_node = new Binary(20);
	Binary *right_node = new Binary(30);
	Binary *left_left_node = new Binary(40);
	Binary*right_right_node = new Binary(50);

	//making tree
	root->left = left_node;
	root->right = right_node;
	left_node->left = left_left_node;
	right_node->right = right_right_node;

	print(root);
	return 0;
}