#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> socks;
	vector<int> colour;
	int n;
	cin>>n;
	int x;
	int count=1,pair=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(socks.find(x)==socks.end())
		{
			socks.insert(make_pair(x,count));
			colour.push_back(x);
		}
		else
		{
			socks[x]+=count;
		}
	}
	
	for(int j=0;j<colour.size();j++)
	{
		if(socks[colour[j]]%2==0)
		{
			pair+=(socks[colour[j]]/2);
		}
		else{
			socks[colour[j]]-=1;
			pair+=(socks[colour[j]]/2);
		}
	}
	cout<<pair;
}
