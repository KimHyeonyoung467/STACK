#include <iostream>
#include <ctype.h>
using namespace std;



class Stack
{
public : 
	
private : 
	int* stack;
	int top = -1; 
	int capacity; // ¿ë·® 

public : 
	Stack(int capacity)
	{
		this->capacity = capacity;
		stack = new int[capacity];
		top = -1; 
	}
	~Stack()
	{
		delete[] stack; 
	}
public : 
	void Push(int Value);
	int Pop();
	int Full();
	int Empty();
	int Peek();
	int Size();

};