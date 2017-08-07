#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	
	
	int n;
	cin>>n;
	map<int,int> s;
	vector<int> a;
	int count=1;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(s.find(x)==s.end())
		{
			s.insert(make_pair(x,count));
			a.push_back(x);
		}
		else s[x]+=1;
		
		
		
	}
	int maxc=0,ce=0;
	for(int j=0;j<a.size();j++)
	{
		if(s[a[j]]>maxc)
		{
			maxc=s[a[j]];
			ce=a[j];
		}
		else if(s[a[j]]==maxc)	if(ce>a[j]) ce=a[j];
		
	}
	
	cout<<ce;
	
	
	
	
	
	
	
	
}
