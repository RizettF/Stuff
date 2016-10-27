
#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <queue>

template <class Type>
struct ob
{
	Type info;
	ob<Type> *top;
};

template<class Type>
class Queue
{
private:

public:
	Queue();
	~Queue();
};


#endif /* TEMPLATE_H_ */
