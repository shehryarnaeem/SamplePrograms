#include<iostream>
#include<map>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long int n;
		cin>>n;
		long int a[n],count=1,maj_i=0,maxc=0;
		for(long int j=0;j<n;j++) cin>>a[j];
		
		for(long int k=1;k<n;k++)
		{
			if(a[maj_i]==a[k])
			{
				++count;
			 } 
			else --count;
			if(count==0)
			{
				maj_i=k;
				count =1;
			}
			
		}
		for(long int l=0;l<n;l++)
		{
			if(a[maj_i]==a[l])
			{
				maxc++;
			}
		}
		if(maxc>=(n/2))
		{
			cout<<a[maj_i]<<endl;
		}
		else
		{
			cout<<"none"<<endl;
		}
	}	
}
