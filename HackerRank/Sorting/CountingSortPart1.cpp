#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    map<int,int> freq;
    cin>>n;
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        freq.insert(make_pair(i,0));
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
            freq[ar[i]]+=1;
            //ar.erase(ar.begin()+i);
            //--i;
    }
    for(int i=0;i<n;i++)
    {

        cout<<freq[ar[i]]<<" ";
    }
    return 0;
}
