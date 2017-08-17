#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    map<char,int> freq;
    map<char,int> freq1;
    for(int i=0;i<a.size();i++)
    {
        if(freq.find(a[i])!=freq.end())
        {
            freq[a[i]]+=1;
        }
        else{
            freq.insert(make_pair(a[i],1));
        }
    }
    for(int i=0;i<b.size();i++)
    {
        if(freq1.find(b[i])!=freq1.end())
        {
            freq1[b[i]]+=1;
        }
        else{
            freq1.insert(make_pair(b[i],1));
        }
    }
    int count=0;
    for(int i=0;i<a.size();i++)
    {
        if(b.find(a[i])!=string::npos)
        {
            if(freq[a[i]]==freq1[b[i]])
            {
                ++count;
            }
        }
    }
    cout<<(a.size()+b.size())-(count*2);

    return 0;
}
