#include<iostream>
using namespace std;
template<typename a,typename b,typename c>
c sumA(a x,b y)
{
	return x+y;
}
template<>
int sumA<int>(int x,int y)
{
	cout<<"hello"<<endl;
	return x+y;
}
int main()
{
	//float i=0.99;
	//int j=3;
	//double a;
	//a=sum<float,int,double>(i,j);
	//cout<<a<<endl;
	int s=0;
	cout<<sumA<>(10,100);
	return 0;
}
