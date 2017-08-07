#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	char c[82];
	strcpy(c,s.c_str()); 
	int l=strlen(c);
	int rows=(int)round(sqrt(l));
	int col=(int)ceil(sqrt(l));
	vector<vector<char> > v;
	v.resize(col,vector<char>(rows));
	int k=-1;
	for(int i=0 ;i<rows;i++)
	{
		for(int j=0;j<col;j++)
		{
			
			v[i][j]=c[++k];
		}
	}
	
	for(int j=0;j<col;j++)
	{
		for(int i=0;i<rows;i++)
		{
			if(v[i][j]!='\0')
			{
				cout<<v[i][j];
				
			}
		}
		cout<<" ";
	}
	
	
	
	return 0;
}
