#include <iostream>
using namespace std;
class A{
	int x;
	public:
		A():x(120){
		}
	virtual	void Display(){
			cout<<"Base : "<<x<<endl;
		}
		virtual ~A()
		{
			cout<<"In destructor"<<endl;
		}
};


class B : public A
{
	int x;
	public:
		B():x(1450){
	}
		void Display(){
			cout<<"Derived : "<<x <<endl;
		}
		~B()
		{
			cout<<"In child"<<endl;
		}
};


int main()
{
	
	A * obj = new B; // upcasting
	
	obj->Display();
	
	B *obj2 = (B*)(new A);
	obj2->Display();
	
	delete obj;
	delete obj2;
	return 0;
}
