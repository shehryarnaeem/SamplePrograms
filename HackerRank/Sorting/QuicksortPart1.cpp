#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int partition( int ar[],int start,int end) {
   // Enter code for partitioning and printing here.
   int left=start+1,right=end,pivot=start;
   while(right>left)
   {
       while(ar[left]<ar[pivot]&&left<=end)
       {
           ++left;
       }

       while(ar[right]>ar[pivot]&&right>=0)
       {
        --right;
       }

       if(left<=right)
       swap(ar[left],ar[right]);
   }
   swap(ar[pivot],ar[right]);
   pivot=right;

    return pivot;
}
void quickSort(int ar[],int start,int end)
{
   if(start>=end)
   {
       return  ;
   }
else
{
        int piv=partition(ar,start,end);
       quickSort(ar,start,piv-1);
       quickSort(ar,piv+1,end);
}
for(int i=0;i<=end;i++)
   {

       cout<<ar[i]<<" ";
   }
   cout<<endl;
}
int main(void) {

   int _ar_size;

   cin >> _ar_size;
   int _ar[_ar_size];

     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        cin>>_ar[_ar_i];
    }
int start=0,end=_ar_size-1;
   quickSort(_ar,start,end);


   return 0;
}
