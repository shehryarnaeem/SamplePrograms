#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
	string s , t;
	int k;
	int loop;
	
	cin >> s;
	cin>> t;
	cin>> k;
	int j;
	
	
	int diff=abs(s.size()-t.size());
	

	if(s.size()<t.size())
	{
		loop = s.size();
		j = loop;
		t[j] = NULL;
		
	}
	else
	{
		loop = t.size();
		j = loop;
		s[j]= NULL;
	}
	
	k-= diff;
	
	for(int i=loop; i>=0 && k>0; i--)
	{
		if(s==t)
		{
			cout<<"YES"<<endl;
			break;
		}
		if(s!=t)
		{
			j--;
			s[j]=NULL;
			t[j]=NULL;	
			k-=2;
		}
		
		cout<<s<<endl;
		cout<<t<<endl;
		
	}
	cout <<"NO"<<endl;
	
	
	return 0;
}
