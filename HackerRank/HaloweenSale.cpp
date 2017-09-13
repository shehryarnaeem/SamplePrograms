#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,d,m,s;
    cin >> p>> d>>m >>s;
    int count=0;

    while(s>=p)
    {


       // ++count;


        if(p-d>=m)
        {
            s-=p;
            p-=d;

        }
        else
        {
            s-=p;
            p=m;
        }
        ++count;







    }
    cout<<count;
    return 0;
}
