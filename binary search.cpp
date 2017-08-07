#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int v,n;
	
	cin>>v>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	  }
	  int low=0,high=a.size(),mid=(high+low)/2;
	  int f;
	  while(f!=v)
	  {
	  	if(v==a[mid])
		  {
		  	f=a[mid];
		  }
	  	else if(v>a[mid])
	  	{
	  		low=mid;
	  		mid=(high+low)/2;
	  		
		  }
		  else 
		  {
		  	high=mid;
		  	mid=(high+low)/2;
		  }
		  
		}  
		cout<<mid;
    return 0;
}

