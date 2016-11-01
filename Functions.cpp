#include "template.h"

int Outer()
{
	int a;
	bool invalid;

	do
	{
		cout << "Which queue would you like to use?\n";
		cout << "1 - Integer queue\n";
		cout << "2 - Double queue\n";
		cout << "3 - String queue\n";
		cout << left << setw(10) << "0 - Exit:";
		cin >> a;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');

		invalid = (a < 0 && a > 3);

		if(invalid)
		{
			cout << "\nPlease enter an option within range!\n";
		}

		if(cin == false)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "\nPlease enter a valid option!\n";
			invalid = true;
		}
	}while(invalid);

	return a;
}

int Inner()
{
	int a;
	bool invalid;

	do
	{
		cout << "What would you like to do?\n";
		cout << "1 - Add Item\n";
		cout << "2 - Delete Item\n";
		cout << "3 - First Item\n";
		cout << "4 - Size of list\n";
		cout << "5 - Empty\n";
		cout << "6 - Full\n";
		cout << "7 - Print\n";
		cout << left << setw(10) << "0 - Exit:";
		cin >> a;
		cin.ignore(numeric_limits<streamsize>::max(),'\n');

		invalid = (a < 0 && a > 3);

		if(invalid)
		{
			cout << "\nPlease enter an option within range!\n";
		}

		if(cin == false)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			cout << "\nPlease enter a valid option!\n";
			invalid = true;
		}
	}while(invalid);

	return a;
}

void Status(bool stat)
{

}

void GetInfo(int& a)
{
	bool invalid;

	do
	{
		cout << "Please enter integer information";
		cin >> a;

		invalid = (a < 0);

		if(invalid)
		{
			cout << "\nPlease enter an integer greater than zero\n";
		}

		if(cin == false)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			invalid = true;
			cout << "\nPlease enter a valid INTEGER!\n";
		}
	}while(invalid);
}

void GetInfo(double& a)
{
	bool invalid;

	do
	{
		cout << "Please enter double information";
		cin >> a;

		invalid = (a < 0);

		if(invalid)
		{
			cout << "\nPlease enter a double greater than zero\n";
		}

		if(cin == false)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			invalid = true;
			cout << "\nPlease enter a valid DOUBLE!\n";
		}
	}while(invalid);
}

void GetInfo(string &a)
{
	cout << "Please enter string information";
	getline(cin, a);
}

void Empty(bool a)
{
	if(a)
	{
		cout << "The queue is EMPTY!\n";
	}
	else
	{
		cout << "The queue is NOT EMPTY!\n";
	}
}

void Full(bool a)
{
	if(a)
	{
		cout << "The queue is FULL!\n";
	}
	else
	{
		cout << "The queue is NOT FULL!\n";
	}
}

/***************************************************************************
 * This function will print out the header for this assignment. It will
 * output the assignment name, the assignment type, and the assignment
 * number.
 **************************************************************************/
void PrintHeader(string asName, char asType, int asNum)
{
	cout << left;
	cout << "**************************************************";
	cout << "\n*  PROGRAMMED BY : Arturo Salgado";
	cout << "\n*  " << setw(14) << "STUDENT ID" << ": 382106";
	cout << "\n*  " << setw(14) << "CLASS" << ": CS1C --> TTH - 11:30p - 2:20pm";
	cout << "\n*  ";
	if(toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName;
	cout << "\n**************************************************\n\n";
	cout << right;
}
