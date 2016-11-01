
#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <queue>

using namespace std;

const int SIZE = 10;

template <class Type>
struct ob
{
	Type info;
	ob<Type> *next;
};

template<class Type>
class Queue
{
private:
	ob<Type> *item;
	ob<Type> *top;
	ob<Type> *last;
	int size;
public:
	Queue();
	void Enqueue(ob<Type> *item);
	ob<Type> Dequeue();
	ob<Type> Front();
	int Size();
	bool isEmpty();
	bool isFull();
	void NewMember(Type a);
	void Print();
	void Print(const ob<Type>& a);
	~Queue();
};

template<class Type>
Queue<Type>::Queue()
{
	item = NULL;
	top = NULL;
	last = NULL;
	size = 0;
}

template<class Type>
void Queue<Type>::Enqueue(ob<Type> *item)
{
	if(top == NULL && size <= SIZE)
	{
		top = item;
		last = item;
		size++;
	}
	else
	{
		last->next = item;
		size++;
	}
}

template<class Type>
ob<Type> Queue<Type>::Dequeue()
{
	ob<Type> *temp;
	ob<Type> copy;

	if(top != NULL)
	{
		temp = top;
		copy = *top;
		top = top->next;

		cout << left << setw(9) << "Deleting " << temp->info << endl;
		delete temp;
		size--;
	}
	else
	{
		cout << "\nCannot pop an empty Queue!\n";
	}

	return copy;
}

template<class Type>
ob<Type> Queue<Type>::Front()
{
	ob<Type> front;

	front = *top;

	return front;
}

template<class Type>
int Queue<Type>::Size()
{
	return size;
}

template<class Type>
bool Queue<Type>::isEmpty()
{
	bool empty;

	if(top == NULL)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}

	return empty;
}

template<class Type>
bool Queue<Type>::isFull()
{
	bool full;

	if(size == SIZE)
	{
		full = true;
	}
	else
	{
		full = false;
	}
	return full;
}

template<class Type>
void Queue<Type>::NewMember(Type a)
{
	item = new ob<Type>;

	item->info = a;

	Enqueue(item);
}

template<class Type>
void Queue<Type>::Print()
{
	ob<Type> *temp;
	int count = 0;

	cout << "Information:\n";
	while(temp->next != NULL && count <= size)
	{
		count++;

		cout << count << setw(2) << "." << temp->info << endl;
		temp = temp->next;
	}
}

template<class Type>
void Queue<Type>::Print(const ob<Type>& a)
{
	cout << setw(7) << "Front:" << a.info << endl;
}

template<class Type>
Queue<Type>::~Queue()
{
	ob<Type> *temp;

	while(top->next != NULL)
	{
		Dequeue();
	}
}
#endif /* TEMPLATE_H_ */
