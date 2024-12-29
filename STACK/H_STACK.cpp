#include "H_STACK.h"

void Stack::Push(int Value)
{

	if (Full() == true)
	{
		cout << "Stack is Not Empty" << endl;
	}
	top = top + 1; 
	stack[top] = Value; 

}

int Stack::Pop() 
{
	if (Empty())
	{
		cout << "Stack is enderflow" << endl; 
		return -1; 
	}
	top = top - 1;
	return stack[top];
}

int Stack::Full()
{
	if (top != -1) return true;
	else 
		return false; 
}

int Stack::Empty()
{
	return top == -1;
}

int Stack::Peek()
{
	if (Empty() == -1)
	{
		cout << "stack is Empty" << endl;
		return -1;
	}
	return stack[top];
}

int Stack::Size()
{
	return top + 1;
}

