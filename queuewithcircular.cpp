#include <iostream>
using namespace std;

class Queue
{
public:
	int size, cap, front;
	int *arr;
	Queue(int c)
	{
		cap = c;
		size = 0;
		front = 0;
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

	int getFront()
	{
		if (isEmpty())
			return -1;
		else
			return front;
	}

	int getRear()
	{
		if (isEmpty())
			return -1;
		else
			return (front + size - 1) % cap;
	}

	void enqueue(int key)
	{
		if (isFull())
			return;
		else
		{
			int rear = getRear();
			rear = (rear + 1) % cap;
			arr[rear] = key;
			size++;
		}
	}

	void dequeue()
	{
		if (isEmpty())
			return;
		front = (front + 1) % cap;
		size--;
	}
};


int main()
{
	Queue q(5);
	q.enqueue(3);
	q.enqueue(3);
	q.enqueue(7);
	q.enqueue(6);


	cout << q.size << endl;
	return 0;
}