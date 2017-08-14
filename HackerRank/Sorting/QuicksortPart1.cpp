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
void partition(vector <int>  ar,int start,int enda) {
   // Enter code for partitioning and printing here.
   int left=start+1,right=enda,pivot=start;
   if(left!=right)
   {

   while(right>left)
   {
       while(ar[left]<ar[pivot]&&left>=start)
       {
           ++left;
       }

       while(ar[right]>ar[pivot])
       {
        --right;
       }

       if(left<=right)
       swap(ar[left],ar[right]);


   }
   swap(ar[pivot],ar[right]);
   //start=0;
   //enda=right;
   //cout<<left<<" "<<right<<endl;
   partition(ar,start,right);
   //start=left;
   //enda=ar.size()-1;
    partition(ar,left,enda);
   }
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
   cin >> _ar_size;

     for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }
    int start=0,enda=_ar.size()-1;

   partition(_ar,start,enda);
for(int i=0;i<_ar.size();i++)
   {

       cout<<_ar[i]<<" ";
   }

   return 0;
}
