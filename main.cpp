#include "template.h"
#include "header.h"

int main()
{
	Queue<int> number;
	Queue<double> big;
	Queue<string> word;
	int user;
	int route;
	bool invalid;
	int a;

	PrintHeader("Templates", 'A', 9);

	user = Outer();

	while(user != 0)
	{
		if(user == 1)
		{
			route = Inner();

			while(route != 0)
			{
				switch(route)
				{
				case 1: GetInfo(a);
						number.NewMember(a);
					break;
				case 2: number.Dequeue();
					break;
				case 3: number.Print(number.Front());
					break;
				case 4: number.Size();
					break;
				case 5: Empty(number.isEmpty());
					break;
				case 6: Full(number.isFull());
					break;
				case 7: number.Print();
					break;
				}
				route = Inner();
			}
		}

		user = Outer();
	}








	return 0;
}
