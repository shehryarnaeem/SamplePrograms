#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;
long int maxe(vector<long int> arr)
{
    long int maxel=arr[0];
    for(int i=1;i<arr.size();i++)
    {

        if(arr[i]>maxel)    maxel=arr[i];
    }
    return maxel;
}
void printm(map<long int,long int> freq,vector<long int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        cout<<freq[arr[i]]<<" ";
    }

}
int main() {
   long int n;
    map<long int,long int> freq;
    cin>>n;
    vector<long int> arr;
    vector<long int> cc;

    for(int i=0;i<n;i++)
    {
       long int temp;
        cin>>temp;
        arr.push_back(temp);

    }
    long int range=maxe(arr);
    for(int i=0;i<=range;i++)
    {
        freq.insert(make_pair(i,0));
    }
    for(int i=0;i<arr.size();i++)
    {
        freq[arr[i]]+=1;
    }
    cc.push_back(freq[0]);
    long int sum=0;
    sum=cc[0];
    for(int i=1;i<(range+1);i++)
    {
         sum+=freq[i];
        cc.push_back(sum);
    }


   long  int arr1[arr.size()];
    for(int i=arr.size()-1;i>=0;i--)
    {
        cc[arr[i]]-=1;
        arr1[cc[arr[i]]]=arr[i];

    }
    for(int i=0;i<cc.size();i++)
    {

        cout<<arr1[i]<<" ";
    }



    return 0;
}
