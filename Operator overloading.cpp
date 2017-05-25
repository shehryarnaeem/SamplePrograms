#include<iostream>
using namespace std;
class A{
	int x;
	public:
		A()
		{
			x=3;
		}
		void display()
		{
			cout<<"Hello";
			cout<<x;
			
		}
		operator +(const A &obj2)
		{
			return(this ->x+obj2.x);
		}
			
			
			
			
			
		
};
int main()
{
	A obj1;
	A obj2;
	A obj3;
	int x;
	x=obj1+obj2;
	
	cout<<x;
	
	
	
}
