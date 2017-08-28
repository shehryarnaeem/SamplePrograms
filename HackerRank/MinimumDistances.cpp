#include<nits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> arr;
    map<int,int> freq;
    pair<pair<int,int>,int> ind;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        if(freq.find(arr[i])!=freq.end())
        {
            freq[arr[i]]+=1;
        }
        else{
            freq.insert(make_pair(arr[i],1));
        }
    }

    return 0;
}
