#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<long int> arr;
    for(int i=0;i<n;i++)
    {
        long int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    vector<long int> diff;

    for(int i=0;i<n;i++)
    {
        if((i+k-1)<n)
        {
      long int temp=arr[i+k-1]-arr[i];
       diff.push_back(temp);
        }

    }
        long int mine=diff[0];
    for(int i=0;i<diff.size();i++)
    {
        if(diff[i]<mine&&diff[i]>=0)
        {
            mine=diff[i];
        }
    }

       cout<<mine;




    return 0;
}
