#include <iostream>
using namespace std; 
#include "H_STACK.h"





int main()
{
	Stack stack(5);

	stack.Push(3);
	stack.Push(5);
	stack.Push(7);
	stack.Push(9);


	cout << stack.Pop() << endl;
	cout << stack.Peek() << endl;
	return 0;
}

