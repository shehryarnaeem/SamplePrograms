#include<iostream>
#include<exception>
using namespace std;
class Divide{
	private:
		int a,b;
	public:
		void divide(int c,int d)
		{
			try{
				if(!d)
				{
					throw d;
				}
				else
				{
					a=c/d;
					cout<<a<<endl;
				}
				}
				catch(...)
				{
					terminate();
				}
				
				
				
				
				
			
			
		}
};
int main()
{
    Divide d1;
    d1.divide(10,0);
    cout<<"I Love C++ :)";
	
	
	
	
	
}
