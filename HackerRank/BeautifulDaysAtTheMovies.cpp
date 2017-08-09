#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int reversed1(int x)
{
    stringstream s;
    s<<x;
    string rev=s.str();
    string temp;
    //temp.reserve(rev.size());
    for(int i=rev.size()-1,j=0;i>=0;i--)
    {
        j++;
        temp.push_back(rev[i]);
    }

    int revi=stoi(temp);
    return revi;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,count=0;
    cin>>i>>j>>k;
    while(i<=j)
    {
        if(((abs(i-reversed1(i)))%k)==0)
        {
            ++count;
        }
        ++i;
    }
    cout<<count;
    return 0;
}
