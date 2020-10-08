#include <iostream>
#include <list>
using namespace std;

class myHash
{
public:
	int BUCKET;
	list<int> *table;
	myHash(int b)
	{
		BUCKET = b;
		table = new list<int> [b];
	}

	void Insert(int key)
	{
		int i = key % BUCKET;
		table[i].push_back(key);
	}

	void Delete(int key)
	{
		int i = key % BUCKET;
		table[i].remove(key);
	}

	bool Search(int key)
	{
		int i = key % BUCKET;
		for (auto x : table[i])
			if (x == key)
				return true;
		return false;
	}
};


int main()
{
	myHash chaining(7);
	chaining.Insert(70);
	chaining.Insert(71);
	chaining.Insert(9);
	chaining.Insert(56);
	chaining.Insert(72);
	cout << chaining.Search(70) << endl;
	chaining.Delete(70);
	cout << chaining.Search(70) << endl;
	return 0;
}