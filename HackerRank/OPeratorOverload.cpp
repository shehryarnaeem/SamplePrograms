#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Matrix{
	int **p;
	int rows,columns;
	public:
		Matrix(int n,int m)
		{
			rows=n;
			columns=m;
			p=new int*[rows];
			for(int i=0;i<rows;i++)
			{   
					*(p+i)=new int[columns];
				
          	}
           
		}
		void input()
		{
			for(int i=0;i<rows;i++)
			{   
				for(int j=0;j<columns;j++)
				{
					cout<<"Enter at"<<i<<" "<<j<<endl;
					cin>>p[i][j];
				}
			
			
			}
		}
		Matrix operator +(Matrix &obj)
		{
			Matrix temp(obj.rows,obj.columns);
          	for(int i=0;i<rows;i++)
			{   
				for(int j=0;j<columns;j++)
				{
					temp.p[i][j]=this->p[i][j]+obj.p[i][j];
				}
			}
			
          	return temp;
		}
		void display()
		{
			for(int i=0;i<rows;i++)
			{   
				for(int j=0;j<columns;j++)
				{
					cout<<p[i][j]<<"   ";
					
				}
				cout<<endl;
			}
		}
		~Matrix()
		{
			if(p)
			{
				delete []p;
			}
			
		}
};

int main()
{
	int test,count=0,n,m;
	cin>>test;
	while(count!=test)
	{
		cin>>n>>m;
	Matrix m1(n,m),m2(n,m),m3(n,m);
	m1.input();
	m2.input();
	m3=m1+m2;
	m3.display();
	++count;
	}
}
