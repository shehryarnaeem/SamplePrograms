#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<string,int> freq;
    for(int i=0;i<s.size();i++)
    {
        if(freq.find(s[i])!=freq.end())
        {
            freq[s[i]]+=1;
        }
        else{
            freq.insert(make_pair(s[i],1));
        }
    }

    return 0;
}
