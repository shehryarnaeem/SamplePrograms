#include<iostream>
using namespace std;
template<typename X>
class Stack{
	int size;
	static int top;
	int b[50];
	public:
		Stack();
	void push_T(X a);
	void pop_T();
};
template<typename X>
int Stack<X>::top=0;
template<typename X>
Stack<X>::Stack()
{
	size =50;
	top=-1;
}
template<typename X>
void Stack<X>::push_T(X a)
{ 
	if(top>size)
	{
		cerr<<"FuLL";
	}
	b[++top]=a;
}
template<typename X>
void Stack<X>::pop_T()
{
	b[--top];
	cout<<"Done"<<endl;
}
int main()
{
	Stack<int> s1;
	int n=100;
	s1.push_T(100);
	s1.pop_T();
}
