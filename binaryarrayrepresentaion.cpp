//if tree start from 1 to n then lc=2*p,rc=2*p+1
//if tree start from 0 to n-1 then lc=2*p+1,rc=2*p+2;

#include <iostream>
using namespace std;

int tree[10];
void root(char key)
{
	if (tree[1] != '\0')
		cout << "Root is already set";
	else
		tree[1] = key;
}

void set_left(int parent, char key)
{
	if (tree[parent] == '\0')
		cout << "\ncannot be set at " << (parent * 2 + 1) << endl;
	else
		tree[parent * 2] = key;
}

void set_right(int parent, char key)
{
	if (tree[parent] == '\0')
		cout << "\ncannot be set at " << (parent * 2 + 2) << endl;
	else
		tree[parent * 2 + 1] = key;
}
void print_tree()
{
	for (int i = 0; i < 10; i++)
	{
		if (tree[i] != '\0')
			cout << tree[i] << " ";
	}
	cout << endl;
}

int main()
{
	root('A');
	set_left('B', 1);
	set_right('C', 1);
	set_left('D', 2);
	set_right('E', 2);
	print_tree();
	return 0;
}