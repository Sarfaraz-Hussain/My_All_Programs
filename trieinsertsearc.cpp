#include <iostream>
using namespace std;

struct TrieNode
{
	TrieNode *child[26];
	bool isEnd;
	TrieNode()
	{
		isEnd = false;
		for (int i = 0; i < 26; ++i)
		{
			child[i] = NULL;
		}
	}
};

void insert(string key, TrieNode *curr)
{
	for (int i = 0; i < key.length(); ++i)
	{
		int index = key[i] - 'a';
		if (curr->child[index] == NULL)
			curr->child[index] = new TrieNode;
		curr = curr->child[index];
	}
	curr->isEnd = true;
}
bool search(string key, TrieNode *curr)
{
	for (int i = 0; i < key.length(); ++i)
	{
		int index = key[i] - 'a';
		if (curr->child[index] == NULL)
			return false;
		curr = curr->child[index];
	}
	return curr->isEnd;
}

int main()
{
	TrieNode* root = new TrieNode;
	insert("dag", root);
	insert("cat", root);
	insert("hello", root);
	insert("good", root);
	search("cat", root) ? cout << "yes" << endl : cout << "no" << endl;
	search("gst", root) ? cout << "yes" << endl : cout << "no" << endl;

	return 0;
}