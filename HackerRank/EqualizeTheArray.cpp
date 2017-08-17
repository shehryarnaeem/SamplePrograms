#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<int,int> freq;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<arr.size();i++)
    {
        if(freq.find(arr[i])!=freq.end())
        {
            freq[arr[i]]+=1;
        }
        else{
            freq.insert(make_pair(arr[i],1));
        }
    }
    int maxe=freq[arr[0]];
    for(int i=0;i<arr.size();i++)
    {
        if(freq[arr[i]]>maxe)
        {
            maxe=freq[arr[i]];
        }
    }
    cout<<((arr.size())-maxe)<<endl;
    return 0;
}
