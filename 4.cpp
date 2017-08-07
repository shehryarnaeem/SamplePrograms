#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s , t;
	int k;
	
	cin >> s;
	cin >> t;
	cin >> k;
	
	int sim=0;
	for(int i=0; i<s.size() && i<t.size(); i++)
	{
		if(s[i]==t[i])
		{
			sim++;
		}
		else
		{
			break;
		}
	}
	
	int diff1 = s.size() - sim;
	int diff2 = t.size() - sim;
	
	int sum = diff1+diff2;
	
	if(sum>k)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
	
}
