#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	vector<char> v;
	char c[100];
	string s;
	getline(cin,s);
	strcpy(c,s.c_str());
	for(int i=0;c[i]!='\0';i++)
	{	
			v.push_back(c[i]);
		
	}
	
	double l=(double)sqrt(v.size());
	int row=round(l);
	int col=ceil(l);
	vector<vector<char> > h;
	 h.resize(col,vector<char>(row));
	 int k=-1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			
			h[i][j]=v[++k];
		}
	}
//	for(int i=0;i<row;i++)
//	{
//		for(int j=0;j<col;j++)
//		{
//				cout<<h[i][j]<<"\t";	
//		}
//		cout<<endl;
//	}
		
	for(int j=0;j<col;j++)
	{
		for(int i=0;i<row;i++)
		{
			if(h[i][j]!='\0')
			{
				cout<<h[i][j];
			}
			
		}
		cout<<" ";
	}
	
	
	
	
	return 0;
}
