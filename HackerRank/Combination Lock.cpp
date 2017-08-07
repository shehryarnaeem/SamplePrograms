#include<bits/stdc++.h>
using namespace std;
int main()
{
	int init,n1=1,n2,n3;
	int sum=1080;
	while(n1|n2|n3)
	{
		cin>>init>>n1>>n2>>n3;
		if(n1|n2|n3)
		{
			
		
		if(40+(init-n1)>=40)
		{
			sum+=(40-(40-(init-n1)))*9;
		}
		else
		{
			sum+=(40+init-n1)*9;
		}
		init=n1;
		if(40+(init-n2)>=40)
		{
			sum+=(40-(init-n2))*9;
		}
		else
		{
			sum+=(n2-init)*9;
		}
		init=n2;
		if(40+(init-n3)>=40)
		{
			sum+=(40-(40-(init-n3)))*9;
		}
		else
		{
			sum+=(40+init-n3)*9;
		}
		cout<<sum<<endl;
		sum=1080;
	    }
	}
	return 0;
}
