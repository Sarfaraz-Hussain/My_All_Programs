#include <iostream>
using namespace std;

class Queue
{
public:
	int cap, size;
	int *arr;
	Queue(int c)
	{
		cap = c;
		size = 0;
		arr = new int[cap];
	}

	bool isFull()
	{
		return (size == cap);
	}
	bool isEmpty()
	{
		return (size == 0);
	}
	void Enqueue(int key)
	{
		if (isFull())
			return;
		arr[size] = key;
		size++;
	}

	void Dequeue()
	{
		if (isEmpty())
			return;
		for (int i = 0; i < size - 1; ++i)
		{
			arr[i] = arr[i + 1];
		}
		size--;

	}

	int getFront()
	{
		if (isEmpty())
			return -1;
		else
			return 0;
	}

	int getRear()
	{
		if (isEmpty())
			return -1;
		else
			return size - 1;
	}

	int size1()
	{
		return size;
	}
};

int main()
{
	Queue q(5);
	q.Enqueue(2);
	q.Enqueue(5);
	q.Dequeue();
	q.Enqueue(40);
	cout << q.size1() << endl;
	return 0;


}