#include<iostream>
using namespace std;
class A{
	int a;
	int b;
	public:
		A(int x=10,int y=20)
		{
			a=x;
			b=y;
		}
		 int sum()
		{
			return a+b;
		}
		virtual ~A()
		{
			
		}
		
};
class B:public A
{
	float aa,bb;
	public:
		B(float xx=10.1,float yy=0.1)
		{
			aa=xx;
			bb=yy;
		}
			int sum()
		{
			cout<<"In child"<<endl;
			return aa*bb;
		}
	
};
int main()
{
    A *a1=new A;;
    B *bb=(B*)(new A);
	B b1;
	A *c1=new B;
	//c1=dynamic_cast<A*>(&b1);
	cout<<bb->sum()<<endl;
	//cout<<c1->sum();
	
	return 0;
}
