#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;

       int count=0;
       for(int j=0;j<s.size();j++)
       {
           if(isupper(s[j]))
           {

               s[j]=tolower(s[j]);
           }
           if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u') ++count;
       }

        cout<<count<<endl;

    }

    return 0;



}
