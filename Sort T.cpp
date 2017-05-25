#include<iostream>
using namespace std;
template <typename T,int size>
T sort(T a[])
{
	for(int i=0;i<size;i++)
	{
		for(int j=size-1;j>=i;j--)
		{
			if(a[j]<a[j-1])
			{
				int temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
}
template <typename T,int size>
T sumA(T a[])
{
	T sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int cc[5]={3,5,1,9,0};
	float cq[5]={3,5,1,9,0};
	sort<int,5>(cc);
	sort<float,5>(cq);
	for(int i=0;i<5;i++)
	{
		cout<<cc[i]<<endl;
	}
	for(int i=0;i<5;i++)
	{
		cout<<cq[i]<<endl;
	}
	cout<<sumA<int,5>(cc)<<endl;
	
	return 0;
}
