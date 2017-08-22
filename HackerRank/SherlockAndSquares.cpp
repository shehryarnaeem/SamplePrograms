#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y,count=0;
        cin>>x>>y;
        while(x<=y)
        {
            int sqri=sqrt(x);
            float sqrf=round(sqrt(x));
            if(sqri==sqrf)
            {
                ++count;
            }
            ++x;
        }
        cout<<count<<endl;
    }
}
