#include<bits/stdc++.h>
using namespace std;
 double fastExp(int x,int n)
{

     double y=1;
    while(n>=1)
    {
        if(n%2==1)
        {
            y*=x;
        }

            x*=x;
            n=n/2;
    }



    return y;
}
int main(){
    int n,y;
    cin>>n>>y;
    cout<<fastExp(n,y);


}
