#include <iostream>
#include "CharStack.h"
#include "CharNode.h"


using namespace std;


//push, pop, top, size, empty

void Oppgave1() 
{
	CharStack obj1;
	obj1.push('a');
	obj1.push('b');
	obj1.push('c');
	obj1.push('d');
};

int main()
{

	CharStack object1;
	object1.push('a');
	cout << "Top element : " << object1.top() << "\n size of stack: " << object1.GetSize() << endl;

	object1.push('b');
	cout << "Top element : " << object1.top() << "\n size of stack: " << object1.GetSize() << endl;

	object1.pop();
	cout << "Top element : " << object1.top() << "\n size of stack: " << object1.GetSize() << endl;

	object1.push('c');
	cout << "Top element : " << object1.top() << "\n size of stack: " << object1.GetSize() << endl;

	system("pause");
}