#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int k;
    string s;
    string t;
    cin>>s;
    cin>>t;
    cin>>k;
    int count=0;
    int i=0;
    if(s==t)
    {
        if(k>=t.size()) cout<<"Yes";
        else cout<<"No";
    }
    else{
        while(t[i]==s[i]&&i<t.size())
        {
            ++count;
            ++i;
        }

        int app,del,sum;
        app=t.size()-count;
        del=s.size()-count;
            sum=app+del;
            if(k==sum)
            cout<<"Yes";
            else if(count==0)
        {
            int tot=s.size()+t.size();
            if(k>=tot)
            {
                cout<<"Yes";
            }
            else{
                cout<<"No";
            }
        }

            else if(k>sum)
            {

             if(k%2==0)
             {
                 cout<<"Yes";
             }
             else if(k%2!=0)
             {
                 k-=del;
                 if(k%2==0)
                 {
                     cout<<"Yes";
                 }
                 else{
                    cout<<"No";
                 }
             }
        }
        else{
            cout<<"No";
        }


    }

    return 0;
}
