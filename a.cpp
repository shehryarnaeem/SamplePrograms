#include<iostream>
using namespace std;
int main()
{
	long t,b,w,x,y,z;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		cin>>b>>w;
		cin>>x>>y>>z;
		long cost=0,total=0;
		if(x>y&&x>z)
		{
			cost+=(y*z);
			total+=((y+z)*b)+(y*w);
		}
		else if(y>x&&y>z)
		{
				cost+=(x*z);
			total+=((x+z)*w)+(x*b);
		}
		else{
			total=(b*x)+(w*y);
		}
		
		
		cout<<total<<endl;
		
		
		
	}
	
	
	
	
	
	
	
 } 
