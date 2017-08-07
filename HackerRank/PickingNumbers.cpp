#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    int n;
    int mi;
    bool cab=true;
        cin >> n;
    vector<int> a(n);
    vector<int> b(n,0);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int maxc=0;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(i!=j)
    		{
    			if(abs(a[i]-a[j])<=1)
    			{
    				b[i]+=1;
				}
    			
			}
		}
		 cout<<a[i]<<"	"<<b[i]<<endl;
	}
	int minc=b[0];
	
	while(cab==false)
	{
		
		
	
	for(int i=0,j=0;i<a.size();i++)
	{
		cab==true;
		if(i!=j)
		{
		
		if(abs(a[i]-a[j])>1)
		{
			cab=false;
		}
	   }
		if(b[i]<minc)
		{
			minc=b[i];
			mi=i;
		}
		++j;
	}
	if(cab==false)
	{
		a.erase(a.begin()+mi);
		b.erase(b.begin()+mi);
		
	}
   }
//	for(int i=0;i<a.size();i++)
//	{
//		if(b[i]<maxc)
//		{
//			
//			--i;
//			
//		}
//		
//	}
	cout<<a.size();
    return 0;
}

